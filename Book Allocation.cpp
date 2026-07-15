bool ChcekHalfs(vector<int>& arr, long long k, long long mid){
    int n = arr.size(); 
    //[10,20,30,40,50]
   
    long long sum = 0; 
    int Student = 1; 

  for(int i = 0; i<n; i++){
      
      if(sum + arr[i] <= mid){
          sum += arr[i];
      }else{
          Student++; //k: stud cnt
          sum = arr[i]; // prev numb || eleminated num of last stud
      }
  }

  if(Student <= k){
         return true; 
      }else{
     return false; 
      }
}

class Solution {
  public:
    int findPages(vector<int> &arr, int k) {
      int n = arr.size(); 
      
      long long low = *max_element(arr.begin(), arr.end()); // largest single item 
      long long high = accumulate(arr.begin(), arr.end(),0LL); 
      
       if(k > n) return -1; 
        
      long long  ans = 0; 
      
     while(low <= high){
         
         long long mid = low +(high - low)/2;
         
         if(ChcekHalfs(arr,k,mid)){
             ans = mid; 
             high = mid - 1; 
         }else{
             low = mid + 1; 
         }
     }
     return ans; 
    }
};
