class Solution {
  public:
    vector<int> productExceptSelf(vector<int>& arr) {
       int n = arr.size();
       vector<int> res(n,1);
       long long prefix = 1; 
       for (int i=0; i<n; i++){
        res[i] = prefix;
        prefix *= arr[i];
       }
       long long sufix = 1; 
       for(int i = n-1; i >= 0; i--){
           res[i] *= sufix;
           sufix *= arr[i];
       }
       return res; 
    }
};
