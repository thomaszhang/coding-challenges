// m = # of rows
// n = # of cols
// O(m * n * m) - m*n for min, m for max

class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int> lucky;
        for (int i = 0; i < matrix.size(); i++) {
            // Find min in each row
            int min = INT_MAX;
            int minIndex = 0;
            for (int j = 0; j < matrix[i].size(); j++) {
                if (matrix[i][j] < min) {
                    min = matrix[i][j];
                    minIndex = j; // (i,j)
                }
            }
            // Check if min in this row is max in column
            int max = 0;
            for (int k = 0; k < matrix.size(); k++) {
                if (matrix[k][minIndex] > max) {
                    max = matrix[k][minIndex];
                } 
            }
            // Lucky! Min row = max col
            if (min == max)
                lucky.push_back(min);
        }
        return lucky;
    }
};