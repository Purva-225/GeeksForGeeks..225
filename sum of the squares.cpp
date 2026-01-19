//Given an integer n. The task is to calculate the sum of the squares of the first  n natural numbers.
class Solution {
  public:
    int sumOfSquares(int n) {
        // code here
        int sum = 0; 
        for(int i =1; i<=n; i++){
            sum += i*i;
        }
        return sum;
    }
};
