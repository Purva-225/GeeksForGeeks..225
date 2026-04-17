// Brutal
class Solution {
  public:
    long subarrayXor(vector<int> &arr, int k) {
        int n = arr.size(); 
        
        int cnt = 0; 
       
        for(int i = 0; i < n; i++){
            int xr = 0;  
            for(int j = i; j < n; j++){
                xr = xr ^ arr[j];  
                if(xr == k){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};
// optimal
class Solution {
  public:
    long subarrayXor(vector<int> &arr, int k) {
        int n = arr.size(); 
        int cnt = 0; 
         int xr = 0; 
         
       map<int,int> mpp; 
       mpp[xr]++;
       
        for(int i =0; i<n; i++){
              xr = xr^arr[i]; 
             int x = xr^k; 
               cnt += mpp[x]; 
             mpp[xr]++;
        }
        return cnt;
        
    }
};
