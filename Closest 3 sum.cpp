class Solution {
  public:
    int closest3Sum(vector<int> &arr, int target) {
       int n = arr.size(); 
        sort(arr.begin(), arr.end());
        int closest = arr[0] + arr[1] + arr[2];
        
        for(int i =0; i<n-2; i++){
            int left = i+1; 
            int right = n-1; 
            
            while (left < right){
                int sum = arr[i]+arr[left]+arr[right];
                
                if(abs(sum - target) < abs(closest - target) || 
                (abs(sum - target) == abs(closest - target) 
                && sum > closest)){
                closest = sum; 
                } 
                if(sum < target){
                    left++;
                }else if(sum > target){ 
                right--;
                } else{
                    return sum;
                }
            }
        }
         return closest; 
    }
};
