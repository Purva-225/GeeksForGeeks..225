class Solution {
  public:
  
  int getLowerBound(int arr[],int n, int target){
      int st = 0; 
      int end = n-1; 
      int ans = n; 
      
      while(st<= end){
          int mid = st + (end - st)/2; 
          
          if(arr[mid] >= target){
              ans = mid; 
              end = mid-1; 
          }else{
              st = mid+1; 
          }
      }
      return ans; 
  }
int getUpperBound(int arr[],int n, int target){
        int st = 0; 
        int end = n-1; 
        int ans = n; 
        
        while(st<=end){
            int mid = st + (end - st)/2; 
            
            if(arr[mid] <= target){
                st = mid+1; 
            }else{
                // if mid >= target
                // will store it 
                ans = mid; 
                end = mid-1; 
            }
            
        }
     return ans; 
}
    int countFreq(vector<int>& arr, int target) {
        int n = arr.size();
       int LboundIdx = getLowerBound(arr.data(),n, target); 
       int UboundIdx = getUpperBound(arr.data(),n, target); 
       int ans = UboundIdx - LboundIdx;
       return ans; 
    }
};
