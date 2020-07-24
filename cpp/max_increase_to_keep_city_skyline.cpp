class Solution {
public:
    int min(int a, int b) {
        return (a < b) ? a : b;
    }
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        vector<int> left; // max in each row
        vector<int> bottom; // max in each column
        // fill left
        for (int i = 0; i < grid.size(); i++) {
            left.push_back(0);
            for (int j = 0; j < grid[i].size(); j++) {
                if (grid[i][j] > left[i])
                    left[i] = grid[i][j];
            }
        }
        // fill right
        for (int i = 0; i < grid[0].size(); i++) {
            bottom.push_back(0);
            for (int j = 0; j < grid.size(); j++) {
                if (grid[j][i] > bottom[i])
                    bottom[i] = grid[j][i];
            }
        }
        // calculate max
        int sum = 0;
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[i].size(); j++) {
                sum += min(left[i], bottom[j]) - grid[i][j];
            }
        }
        return sum;
    }
};