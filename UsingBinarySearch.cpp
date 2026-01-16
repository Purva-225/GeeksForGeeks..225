/*Given an integer k and array arr. Your task is to return the position of the first occurrence of k in 
the given array and if element k is not present in the array then return -1.
Note: 1-based indexing is followed here.
Examples:
Input: k = 16 , arr = [9, 7, 16, 16, 4]
Output: 3 */

class Solution {
  public:
    int search(int k, vector<int>& arr) {
     for(int i = 0; i<arr.size(); i++){
        if(arr[i] == k){
         return i + 1;
          }
       }
      return -1;
    }
};

       
       


