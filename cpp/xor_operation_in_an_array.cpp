class Solution {
public:
    int xorOperation(int n, int start) {
        int out = 0;
        for (int i = 0; i < n; i++) {
            out ^= (start + 2*i);
        }
        return out;
    }
};
