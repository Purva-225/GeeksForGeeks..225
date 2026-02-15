class Solution {
  public:
    int kthMissing(vector<int> &arr, int k) {
       int n = arr.size();
        
        if(k > arr[n-1] - n)
           return k + n;
           
            int low = 0 ,high = n-1;
            
          while(low<= high){
              int mid = low + (high - low)/2;
            
            if(arr[mid] - (mid+1) < k){
              low = mid + 1;
            }
            else{
              high = mid - 1;
           }
        }
        return low + k; 
    }
};
