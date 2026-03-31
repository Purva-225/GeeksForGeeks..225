class Solution {
public:
    
    void solve(string &s, vector<bool> &visited, string curr, vector<string> &ans) {
        if(curr.length() == s.length()) {
            ans.push_back(curr);
            return;
        }
        
        for(int i = 0; i < s.length(); i++) {
            if(visited[i]) continue;
            
            if(i > 0 && s[i] == s[i-1] && !visited[i-1]) continue;
            
            visited[i] = true;
            solve(s, visited, curr + s[i], ans);
            visited[i] = false;
        }
    }
    
    vector<string> findPermutation(string &s) {
        sort(s.begin(), s.end());
        vector<string> ans;
        vector<bool> visited(s.length(), false);
        
        solve(s, visited, "", ans);
        return ans;
    }
};
