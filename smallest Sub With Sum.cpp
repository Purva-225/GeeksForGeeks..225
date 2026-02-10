class Solution {
  public:
    int smallestSubWithSum(int x, vector<int>& arr) {
        int n = arr.size();
        int sum =0, i= 0; 
        int minLen = INT_MAX;
         for(int j = 0; j<n; j++){
            sum += arr[j];
            while(sum >= x){
                minLen = min(minLen, j-i+1);
                sum -=arr[i];
                i++;
            }
        }
        if(minLen == INT_MAX)
        return 0; 
        return minLen;
    }
};
