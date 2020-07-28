// O(N)
class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> v;
        // Set odd element
        if (n%2 == 1) {
            n -= 1;
            v.push_back(0);
        } 
        // Spread out from zero
        for (int i = 0; i < n; i += 2) {
            v.push_back(-1-i);
            v.push_back(1+i);
        }
        return v;
    }
};