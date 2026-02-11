class Solution {
  public:
    int maxLen(vector<int> &arr) {
       unordered_map<int,int> mp;
       int sum =0;
       int mxLen = 0;
       mp [0] = -1;
        for(int i =0; i<arr.size(); i++){
            if(arr[i]==0){
                sum+=-1;
            }else{
                sum += 1;
            }if(mp.count(sum)){
                int len = i-mp[sum];
                mxLen = max(mxLen,len);
            }else{
                mp[sum] = i;
            }
        }
        return mxLen;
    }
};
