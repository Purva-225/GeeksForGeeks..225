class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
      int n = arr.size();
      int WinSum = 0;
      for(int i =0; i<k;i++){
          WinSum += arr[i];
      }
       int maxSum = WinSum; 
       
       for(int i =k; i<n; i++){
           WinSum += arr[i];
           WinSum -= arr[i-k];
           maxSum = max(WinSum, maxSum);
       }
        return maxSum;
    }
};
