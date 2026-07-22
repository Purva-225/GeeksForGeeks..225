Brute:
class Solution {
  public:
    int rowWithMax1s(vector<vector<int>> &arr) {
        int n = arr.size(); 
        int m =  arr[0].size(); 
        
        int Maxcnt = -1; 
        int Rowindx = -1; 
         if (arr.empty()) return -1;
        for(int i =0; i<n; i++){
            int Cnt = 0; // adds rowWise every element
            for(int j = 0; j<m; j++){
                Cnt += arr[i][j]; 
            }
             if(Cnt > Maxcnt){
             Maxcnt = Cnt; 
            Rowindx = i; 
        }
        }
        return Rowindx;
    }
};
