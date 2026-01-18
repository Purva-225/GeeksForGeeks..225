/* Given an unsorted array arr containing both positive and negative numbers. Your task is to rearrange the array and convert it
into an array of alternate positive and negative numbers without changing the relative order.
Note:
- Resulting array should start with a positive integer (0 will also be considered as a positive integer).
- If any of the positive or negative integers are exhausted, then add the remaining integers in the answer as it is by maintaining the relative order.
- The array may or may not have the equal number of positive and negative integers. */ 

// User function template for C++
class Solution {
  public:
    void rearrange(vector<int> &arr) {
       vector<int> pos, neg; 
       
       for(int val:arr){
            if(val>=0){
              pos.push_back(val);
          }else{
            neg.push_back(val);
          }
        }
         int i = 0, p = 0, n = 0;
        
        while(p<pos.size() && n<neg.size()){
            arr[i++] = pos[p++];
            arr[i++] = neg[n++];
        }
        
        while(p<pos.size()){
            arr[i++] = pos[p++];
        }
        
         while(n<neg.size()){
            arr[i++] = neg[n++];
         }
       
    }
};
