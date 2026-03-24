class Solution {
  public:
    string firstRepChar(string s) {
      unordered_set<char> seen;

        for (int i = 0; i < s.size(); i++) {
            if (seen.count(s[i])) {
                return string(1, s[i]); 
            }
            seen.insert(s[i]);
        }

        return "-1";
    }
};
