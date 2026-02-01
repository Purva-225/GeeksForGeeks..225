class Solution {
  public:
    int findUnique(vector<int> &arr) {
        int n = arr.size();
        sort(arr.begin(),arr.end());
     
        for(int i =0; i<n-1; i+=2){
            if(arr[i] != arr[i+1]){
               return arr[i];
           }
        }
         return arr[n-1];
    }
};
