class Solution {
  public:
    int countTriangles(vector<int>& arr) {
         int n = arr.size();
         sort(arr.begin(), arr.end());
         int cnt =0;
        
         for(int k = n-1; k>=2; k--){
              int i = 0,  j =k-1; 
          while(i<j){
             if( arr[i] + arr[j] > arr[k]){
                cnt += (j-i);
                j--;
             }else{
                 i++;
             }
          }
            
         }
        return cnt;
    }
};
