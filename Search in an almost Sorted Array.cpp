/*Given a sorted integer array arr[] consisting of distinct elements, where some elements of the array are moved to either of the adjacent positions,
i.e. arr[i] may be present at arr[i-1] or arr[i+1].
Given an integer target. 
You have to return the index ( 0-based ) of the target in the array. If target is not present return -1. */ 

/* Constraints:
1 <= arr.size() <= 105
-109 <= arr[i] <= 109 */

class Solution {
  public:
    int findTarget(vector<int>& arr, int target) {
        for(int i =0; i<arr.size(); i++){
            if(arr[i] == target){
                return i; 
            }
        }
        return -1;
    }
};
