//Given an integer n. Your task is to calculate the sum of all natural numbers from 1 up to n (inclusive). If n is 0, the sum should be 0.
class Solution {
  public:
    int findSum(int n) {
        // code here
      int sum = 0;
       for(int i =1; i<=n; i++){
         sum += i;
       }
        return sum;
    }
};
