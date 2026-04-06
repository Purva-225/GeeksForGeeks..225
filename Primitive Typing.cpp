class Solution {
  public:
    int FindPath(string str) {
        int n = str.size();
        int totalMoves = 0; 
        
        int currentRow = 0; int currentCol = 0; 
        for(char ch : str){
            int idx = ch - 'a';
            
            int newROW = idx / 5; 
            int newCOL = idx % 5;
            
            totalMoves += abs(currentRow - newROW) + abs(currentCol - newCOL);
            
            totalMoves += 1; // as we need additional 1 after pressing 'OK'
            
            currentRow = newROW; 
            currentCol = newCOL; 
        }
        return totalMoves;
    }
};
