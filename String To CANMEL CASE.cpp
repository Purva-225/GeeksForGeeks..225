// User function Template for C++

class Solution {
  public:
    // Function to convert the given string to Camel Case
    string convertToCamelCase(string& s) {
      string result = "";
    int i = 0;

   
    while (i < s.length() && s[i] == ' ') i++;
    if (i < s.length()) {
        result += tolower(s[i]);
        i++;
    }

    for (; i < s.length(); i++) {
        if (s[i] == ' ') {
            while (i < s.length() && s[i] == ' ') i++;

            if (i < s.length()) {
                result += toupper(s[i]);
            }
        } else {
            result += s[i];
        }
    }

    return result;
    }
};
