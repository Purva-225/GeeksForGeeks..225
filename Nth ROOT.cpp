long long power(long long mid, int n){
int ans = 1; 
for(int i =0; i<n; i++){
    ans *= mid; 
}
return ans; 
}
class Solution {
  public:
    int nthRoot(int n, int m) {
       // Monotonic: to check weather MID^N == M? IF IT IS GREATER MOVE LEFT ELSE RIGHT.  
       //what i have to search: int num
       int low = 0; 
       int high = m; 
       while(low <= high){
        int mid = low + (high - low)/ 2; 
        
        long long val = power(mid,n);
        
         if(val == m){
            return mid; 
        }
        if(val < m){
           low = mid+1; 
        }else{
            high = mid - 1; 
        }
       }
       return -1;
    }
}; 
