class Solution {
  public:
    int equalSumSpan(vector<int> &a1, vector<int> &a2) {
     unordered_map<int,int> mp; 
     int sum = 0; int ans = 0; 
     
     for(int i = 0; i<=a1.size()-1; i++){
         sum += a1[i] - a2[i];
         
         if(sum == 0) ans = i+1;
         
         if(mp.find(sum) != mp.end()) 
         ans = max(ans,i-mp[sum]);
         
         else
         mp[sum] = i; 
         
     }
     return ans; 
        
    }
};
