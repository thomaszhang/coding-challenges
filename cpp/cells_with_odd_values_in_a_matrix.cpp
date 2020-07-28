// O(indices.size()*(m+n))

class Solution {
public:
    int oddCells(int n, int m, vector<vector<int>>& indices) {
        vector<int> v(m*n,0);
        
        for (int i = 0; i < indices.size(); i++) {
            // for each index [ri, ci]
            int ri = indices[i][0];
            int ci = indices[i][1];
            // increment row ri
            for (int j = 0; j < m; j++) {
                v[ri*m+j] += 1;
            }
            // increment col ci
            for (int j = 0; j < n; j++) {
                v[j*m+ci] += 1;
            }
        }
        // count odds
        int odd = 0;
        for (int i = 0; i < v.size(); i++) {
            if (v[i]%2 == 1)
                odd += 1;
        }
        return odd;
    }
};