// Brutal
class Solution {
  public:
    long subarrayXor(vector<int> &arr, int k) {
        int n = arr.size(); 
        
        int cnt = 0; 
       
        for(int i = 0; i < n; i++){
            int xr = 0;  // moved here
            for(int j = i; j < n; j++){
                xr = xr ^ arr[j];   // accumulate XOR
                if(xr == k){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};
