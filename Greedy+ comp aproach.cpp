class Solution {
  public:
  
   static bool cmp(string a, string b){
        return a + b > b + a;
    }
    string findLargest(vector<int> &arr) {
        
        vector<string> nums;
        
       
        for(int x : arr)
            nums.push_back(to_string(x));
        
      
        sort(nums.begin(), nums.end(), cmp);
        
       
        string ans = "";
        for(string s : nums)
            ans += s;
        
      
        if(ans[0]=='0') return "0";
        return ans;
    }
};
