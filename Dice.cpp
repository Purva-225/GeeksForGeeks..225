class Solution {
public:
    int noOfWays(int m, int n, int x) {
        
        vector<vector<int>> dp(n + 1, vector<int>(x + 1, 0));

        dp[0][0] = 1;

        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= x; j++) {
                for(int face = 1; face <= m; face++) {
                    
                    if(face <= j) {
                        dp[i][j] += dp[i-1][j-face];
                    }
                }
            }
        }

        return dp[n][x];
    }
};
