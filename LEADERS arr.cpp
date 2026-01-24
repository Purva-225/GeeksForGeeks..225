/* You are given an array arr of positive integers. Your task is to find all the leaders in the array. 
An element is considered a leader if it is greater than or equal to all elements to its right. The rightmost element is always a leader. */

class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
        vector<int> elem; 
        int n = arr.size();
    
        int maxiElement = arr[n-1]; 
        elem.push_back(maxiElement);
        for(int i = n - 2; i>=0; i--){
            if(arr[i] >= maxiElement){
             maxiElement = arr[i];
             elem.push_back(arr[i]);
            } 
        }
        reverse(elem.begin(),elem.end());
        return elem;
    }
};
