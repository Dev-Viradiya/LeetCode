class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        for (int i = 0; i < grid.size(); i++) {
            sort(grid[i].begin(), grid[i].end());
        }
        
        int totalSum = 0;
        for (int j = 0; j < grid[0].size(); j++) {
            int maxInCol = 0;
            for (int i = 0; i < grid.size(); i++) {
                maxInCol = max(maxInCol, grid[i][j]);
            }
            totalSum += maxInCol;
        }
        
        return totalSum;
    }
};