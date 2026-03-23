class Solution {
  public:
    bool areKAnagrams(string &s1, string &s2, int k) {
        
        if(s1.length() != s2.length()){
            return false;
        }
        vector<int> freq(26,0);
        
        for(char c : s1){
            freq[c - 'a']++;
        }
        for(char c : s2){
            freq[c - 'a']--;
        }
        int change = 0; 
        for(int i =0; i<26; i++){
            if(freq[i] > 0){
                change += freq[i];
            }
        }
        return change <= k;
        
    }
};
