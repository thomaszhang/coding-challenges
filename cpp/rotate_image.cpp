// O(N)
// Walk each element for two reflections

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        // Reflect over i,j diagonal
        for (int i = 1; i < matrix.size(); i++) {
            for (int j = 0; j < i; j++) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        // Reverse each row
        for (int i = 0; i < matrix.size(); i++) {
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};