// Bottom up - O(N) solution
class Solution {
public:
    // No pruning as values may be negative
    int minimumTotal(vector<vector<int>>& triangle) {
        // Grab last line
        int line_number = triangle.size()-1;
        // Process from last line to second the same way
        while (line_number > 0) {
            vector<int> last_line = triangle[line_number];
            // Propogate min upwards
            for (int i = last_line.size()-1; i > 0; i--) {
                if (last_line[i] < last_line[i-1]) // Right
                    triangle[line_number-1][i-1] += last_line[i];
                else // Left
                    triangle[line_number-1][i-1] += last_line[i-1];
            }
            line_number--;
        }
        // Return root value
        return triangle[0][0];
    }
};

// Top down recursion - O(2^N) complexity
class Solution {
public:
    // Return minimum path
    int min(int a, int b) {
        if (a > b)
            return b;
        return a;
    }
    // No pruning as values may be negative
    int minimumTotal(vector<vector<int>>& triangle) {
        if (triangle.size() == 0)
            return 0;
        // Iterate all paths to leaf
        return minSumToLeaf(triangle, 0, 0);
    }
    int minSumToLeaf(vector<vector<int>> & triangle, int x, int y) {
        // Pass leaf cost up
        if (x == triangle.size()-1) 
            return triangle[x][y];
        // Recursive pick minimum of left or right child (plus current value)
        return triangle[x][y] + min(minSumToLeaf(triangle, x+1, y), minSumToLeaf(triangle, x+1, y+1));
    }
};