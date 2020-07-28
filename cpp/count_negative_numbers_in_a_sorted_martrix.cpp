
// Linear search
class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int count = 0;
        for (int i = 0; i < m; i++) {
            // For each row
            for (int j = 0; j < n; j++) {
                if (grid[i][j] < 0) {
                    count += (n-j);
                    break;
                }
            }
        }
        return count;
    }
};