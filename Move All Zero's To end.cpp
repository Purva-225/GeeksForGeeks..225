class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
      
        int j = 0;
        int n = arr.size();
        for(int i = 0; i<= n-1; i++){
            if(arr[i] != 0){
            swap(arr[i],arr[j]);
            j++;
            }
        } 
        while(j<n){
            arr[j]=0; 
            j++;
        }
    }
};
