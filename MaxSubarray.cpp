class Solution {
  public:
    int maxSubarrayXOR(vector<int>& arr, int k) {
        int n = arr.size();
        
        int curr_xor = 0;
    
      for(int i = 0; i < k; i++) {
        curr_xor ^= arr[i];
    }
    
    int max_xor = curr_xor;
    
    
    for(int i = 1; i <= n - k; i++) {
        curr_xor ^= arr[i-1];        
        curr_xor ^= arr[i+k-1];      
        
        max_xor = max(max_xor, curr_xor);
    }
    
    return max_xor;
        
    }
};
