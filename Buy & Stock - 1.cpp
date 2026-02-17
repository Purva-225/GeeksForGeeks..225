class Solution {
  public:
    int maxProfit(vector<int> &prices) {
        int n = prices.size();
        int buy = INT_MIN; 
        int sell = 0; 
        
        for(int p : prices){
            buy = max(buy, -p);
            sell = max(sell, buy+ p);
        }
        return sell; 
    }
};
