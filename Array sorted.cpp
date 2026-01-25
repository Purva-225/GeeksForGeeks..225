Given an array arr[], check whether it is sorted in non-decreasing order. Return true if it is sorted otherwise false.
class Solution {
  public:
    bool isSorted(vector<int>& arr) {
       int n = arr.size();
       for(int i = 1; i< n; i++){
           if(arr[i] < arr[i-1]){
               return false; 
           }
       }
       return true;
    }
};
