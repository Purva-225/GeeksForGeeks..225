class Solution {
public:
    int remAnagram(string &str1, string &str2) {
        vector<int> freq1(26, 0), freq2(26, 0);

        for(char c : str1) {
            freq1[c - 'a']++;
        }
        for(char c : str2) {
            freq2[c - 'a']++;
        }

        int deletions = 0;

        for(int i = 0; i < 26; i++) {
            deletions += abs(freq1[i] - freq2[i]);
        }

        return deletions;
    }
};
