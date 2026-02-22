class Solution {
  public:
    long subarrayXor(vector<int> &arr, int k) {
        int n = arr.size();
        int count = 0; 
        int prefix = 0; 
        
        unordered_map<int, int> mp;
        mp[0] = 1; 

    for(int i = 0; i < n; i++){
        prefix ^= arr[i];

        if(mp.find(prefix ^ k) != mp.end())
        count += mp[prefix ^ k]; 
        mp[prefix]++;
      }
      return count;
    }
};
