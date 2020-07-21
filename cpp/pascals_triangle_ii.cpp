class Solution {
public:
    vector<int> getRow(int rowIndex) {
        // kth row has k elements
        // initialize vector with k elements of 1
        vector<int> v(rowIndex+1, 1);
        // starting at rowIndex=2, add parents
        for (int k = 2; k <= rowIndex; k++) {
            // make a copy of elements due to overwriting
            vector<int> prev = v;
            for (int i = 1; i<k; i++) {
                v[i] = prev[i-1] + prev[i];
            }
        }
        return v;
    }
};
