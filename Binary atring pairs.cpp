class Solution {
  public:
    int binarySubstring(string& s) {
        int cnt = 0;
          for( char c : s){
              if(c == '1') cnt++;
        }
        return (cnt * (cnt - 1))/2;
    }
};

// hume ek toh traverse krna hai string mai our check krna hai
//kya humari substring 1 se st ho rhi hai
//our 1 se end ho rhi hai agar haan toh cnt kro 
//kitni baar uske pairs ban rhe hai 
// if(char c == 1) cnt++; 
