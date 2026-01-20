//You are given two numbers a and b. Your task is to swap the given two numbers.
//Note: Try to do it without a temporary variable.

class Solution {
  public:
    pair<int, int> get(int a, int b) {
        // code here
     a = a ^ b; 
     b = b ^ a; 
     a = a ^ b;
       return {a , b};
    }
};
