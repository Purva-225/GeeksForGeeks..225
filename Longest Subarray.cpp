class Solution {
  public:
    int longestSubarray(vector<int> &arr, int k) {
      unordered_map<int,int> first;
    
    int pref = 0, ans = 0;

    for(int i=0;i<arr.size();i++){
        
       
        if(arr[i] > k) pref += 1;
        else pref -= 1;

       
        if(pref > 0) ans = i+1;

        else{
            if(first.count(pref-1))
                ans = max(ans, i-first[pref-1]);
        }

        
        if(!first.count(pref))
            first[pref] = i;
    }
    return ans;
        
    }
};
