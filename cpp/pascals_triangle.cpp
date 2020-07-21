class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;
        // Each row has i+1 elements
        for (int i = 0; i < numRows; i++) {
            vector<int> row;
            // First element = 1
            row.push_back(1);
            for (int j = 1; j < i; j++) {
                row.push_back(result[i-1][j-1] + result[i-1][j]);
            }
            // Last element = 1
            if (i > 0) {
                row.push_back(1);
            }
            result.push_back(row);
        }
        return result;
    }
};
