class Solution {
public:
    int solve(vector<int>& stoneValue, int i, vector<int>& dp) {

        if (i >= stoneValue.size()) {
            return 0;
        }
        
        if (dp[i] != -1) {
            return dp[i];
        }

        int ans = INT_MIN;
        int take = 0;
        
        for (int j = 0; j < 3 && i + j < stoneValue.size(); ++j) {
            take += stoneValue[i + j];
            ans = max(ans, take - solve(stoneValue, i + j + 1, dp));
        }
        
        return dp[i] = ans;
    }

    string stoneGameIII(vector<int>& stoneValue) {
        vector<int> dp(stoneValue.size(), -1);
        
        int ans = solve(stoneValue, 0, dp);
        
        if (ans > 0) {
            return "Alice";
        } else if (ans < 0) {
            return "Bob";
        }
        return "Tie";
    }
};