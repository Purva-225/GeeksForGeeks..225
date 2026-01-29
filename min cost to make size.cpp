class Solution {
  public:

    int cost(vector<int>& arr) {
        int n = arr.size();
        if(n<= 1){
            return 0;
        }
        int min = *min_element(arr.begin(),arr.end()); 
        return (n-1)*min; 
    }
};
