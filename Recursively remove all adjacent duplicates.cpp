// User function template for C++

class Solution {
  public:
    string removeUtil(string &s) {
       /* int i =0; 
        string result = "";
       while( i <s.length()){
           int j = 1; 
           
           while(j < s.length() && s[i] == s[j]){
               j++;
           }
            if(j == i+1){
        result += s[i];
        }
         i = j;
       }
        if(result == s) return result; 
        return removeUtil(result); */ 
          int i = 0; 
        string result = "";
        
        while(i < s.length()){
            int j = i + 1;   
            
            while(j < s.length() && s[i] == s[j]){
                j++;
            }
            
            if(j == i + 1){
                result += s[i];
            }
            
            i = j;
        }
        
        if(result == s) return result; 
        return removeUtil(result);
    }
};
