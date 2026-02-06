class Solution {
  public:
    void modifyArray(vector<int>& arr) {
        int n = arr.size();
       sort(arr.begin(),arr.end());
       for(int i=0; i<n-1; i++){
           if(arr[i] != i){
              arr[i] = -1; 
           }
       }
    }
};
