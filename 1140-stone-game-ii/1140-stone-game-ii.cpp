class Solution {
public:

    int solve(vector<int>& piles, int i, vector<vector<int>>& dp,int M) {

        if (i >= piles.size()) {
            return 0;
        }
        
        if (dp[i][M] != -1) {
            return dp[i][M];
        }

        int ans = INT_MIN;
        int take = 0;
        
        for (int j = 0; j < 2*M && i + j < piles.size(); ++j) {
            take += piles[i + j];
            ans = max(ans, take - solve(piles, i + j + 1, dp,max(M,j+1)));
        }
        
        return dp[i][M] = ans;
    }

    int stoneGameII(vector<int>& piles){
        vector<vector<int>> dp(piles.size(),vector<int> (2*piles.size(),-1));
        int diff = solve(piles, 0, dp, 1);

        int sum = 0;
        for(int p : piles) {
            sum += p;
        }

        return (sum + diff) / 2;
    }
};