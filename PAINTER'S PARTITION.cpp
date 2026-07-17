bool PaintersK(vector<int>& arr, int k, int mid){
    int n = arr.size(); 
    int sum = 0; 
    int partition = 1; 
     for(int i = 0; i<n; i++){// i<=n? 
        sum += arr[i]; 
        if(sum > mid){
            partition++; 
            sum = arr[i]; 
        }
     }
      if(partition <= k){
            return true; 
      }
     return false; 
}

class Solution {
  public:
    int minTime(vector<int>& arr, int k) {
        int n = arr.size();
        int ans = 0;
        int low = *max_element(arr.begin(), arr.end());
         int high = accumulate(arr.begin(), arr.end(),0); 
         
         while(low <= high){
             int mid = low +(high - low)/2; 
             
             if(PaintersK(arr,k,mid)){
                 ans = mid; 
                   high = mid - 1;
             }else {
                 low = mid+1; 
             }
         }
         return ans; 
    }
};
