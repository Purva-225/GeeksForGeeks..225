// User function Template for C++
class Solution {
  public:

    // Function to remove a character from the given position

    string removeCharacter(string &s, int pos) {
       s.erase(pos,1);
       return s; 
    }
};
