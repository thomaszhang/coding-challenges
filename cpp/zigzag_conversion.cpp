// O(N) time complexity
// Iterate once over length of input string
class Solution {
public:
    string convert(string s, int numRows) {
        vector<string> v;
        for (int c = 0; c < numRows; c++) {
            v.push_back("");
        }
        int increment = 0;
        int row = 0;
        int i = 0;
        while (i < s.size()) {
            // Append current char to correct row
            v[row] += s[i];
            // Prep next
            if (numRows-1 == 0)
                increment = 0;
            else if (row == 0)
                increment = 1;
            else if (row == numRows-1)
                increment = -1;
            // Set next
            row += increment;
            i++;
        }
        for (int c = 1; c < numRows; c++) {
            v[0] += v[c];
        }
        return v[0];
    }
};