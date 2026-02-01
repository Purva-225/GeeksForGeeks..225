class Solution {
  public:
    int missingNum(vector<int>& arr) {
       long long int n = arr.size() + 1;
        long long int total = n*(n+1)/2;
          long long int sum = 0; 
         
        for(int i =0; i<arr.size(); i++){
               sum += arr[i];
        }
        return total - sum; 
    }
};
