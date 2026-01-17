//You are given an array arr[], the task is to return a list elements of arr in alternate order (starting from index 0).

class Solution {
  public:
    vector<int> getAlternates(vector<int> &arr) {
       vector<int>ans;
      for(int i =0; i<arr.size(); i+=2){
         ans.push_back(arr[i]);
      }
      return ans;
    }
};
