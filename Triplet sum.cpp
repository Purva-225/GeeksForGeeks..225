class Solution {
  public:
    bool hasTripletSum(vector<int> &arr, int target) {
       int n = arr.size();
       sort(arr.begin(),arr.end());

       for(int i = 0; i<n-2; i++){
            int Right = n-1; 
            int left = i+1; 
         while(left < Right){
            int sum = arr[i]+arr[Right]+arr[left];
            
            if(sum == target)
               return true;
               
             else if(sum < target)
                   left++;
               else 
                     Right--;
         }
       }
       return false; 
    }
};
