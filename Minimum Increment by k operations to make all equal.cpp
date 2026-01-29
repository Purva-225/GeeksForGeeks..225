class Solution {
  public:
    // Function to find minimum operations to make all elements equal.
    int minOps(vector<int> arr, int k) {
    int n = arr.size();
      int maxi = *max_element(arr.begin(), arr.end());
        int operation = 0; 
        for(int i =0; i<n; i++){
            int diff = maxi - arr[i];
            if(diff % k != 0){
                return -1;
            }
            operation += diff/k;
        }
        return operation;
    }
};
