class Solution {
  public:
    int maxWater(vector<int> &arr) {
        int n = arr.size(); 
        int left = 0;
        int right = n-1; 
        
        int leftmaxi = 0; 
        int rightmaxi = 0; 
        
        int totalwater = 0; 
        
        while(left <= right){
          if(arr[left] < arr[right]){
                if(arr[left] >= leftmaxi ){
                  leftmaxi = arr[left];
            }else{
                totalwater += leftmaxi - arr[left]; 
            }
              left++;
             }else{
                if(arr[right] >= rightmaxi){
                    rightmaxi = arr[right];
                }else{
                    totalwater += rightmaxi - arr[right] ;
                }
                right--;
             }
        }
        return totalwater;
    }
};
