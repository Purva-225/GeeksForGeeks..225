class Solution {
  public:
    int searchCharacter(string &s, char ch) {
       // search given char in string 
       // print indx position where 1st appears in string 
       // if not found -1; 
       
       int n = s.size(); 
         for(int i = 0; i<n; i++){
             if(s[i] == ch){
                 return i; 
             }
         }
         return -1;
    }
};
