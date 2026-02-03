class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        unordered_set<int> s;
       
        for(int i =0; i<arr.size(); i++){
            int x = target - arr[i]; 
        
            if(s.find(x)!= s.end()){
                return true;
            }
         s.insert(arr[i]);
        }
         return false;
    }
};

