class Solution {
  public:
    bool areAnagrams(string& s1, string& s2) {
      if(s1.size() != s2.size()) return false; 
      
      sort(s1.begin(), s1.end());
      sort(s2.begin(),s2.end());
      
      return s1 == s2; 
    }
};// s1 == s2 ,return true else false if (s1[i] != s2[i]) return false
