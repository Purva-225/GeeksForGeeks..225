class Solution {
  public:
    string largestSwap(string &s) {
       int n = s.size(); 
     
     for(int i = 0; i<n; i++){
         int maxIdx = i; 
         
         for(int j = i+1; j<n; j++){
             if(s[j] >= s[maxIdx])
             maxIdx = j; 
         }
         if(s[maxIdx] > s[i]){
             swap(s[i],s[maxIdx]);
             break; 
         }
     }
     return s; 
        
    }
};
