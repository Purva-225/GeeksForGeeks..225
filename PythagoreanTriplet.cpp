class Solution {
  public:
    bool pythagoreanTriplet(vector<int>& arr) {
        int n = arr.size(); 
        unordered_set<int> s;
    
        // true if triplet is present (a,b,c) re on diff indx, 
        // which satisfies a^2 -||- 
        // or to return false; 
        
        for(int i = 0; i < n; i++){
             int sq = arr[i] * arr[i]; 
                arr[i] = sq;
                s.insert(sq);
        }
        // to find pairs
        for(int i =0; i<n; i++){
            for(int j = i+1; j<n; j++){
                
                int sum = arr[i] + arr[j]; 
                
                if(s.find(sum) != s.end())
                return true;
            }
        }
        return false; 
    }
};
