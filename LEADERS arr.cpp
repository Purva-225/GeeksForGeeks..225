/* You are given an array arr of positive integers. Your task is to find all the leaders in the array. 
An element is considered a leader if it is greater than or equal to all elements to its right. The rightmost element is always a leader. */

class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
        vector<int> ans; 
        int maxi = INT_MIN; 
        int n = arr.size();
        
        for(int i = n-1 ; i>= 0; i--){
            if(arr[i] >= maxi){
            ans.push_back(arr[i]);
             maxi = arr[i];
           }
        }
        reverse(ans.begin(), ans.end());
        return ans; 
    }
};
