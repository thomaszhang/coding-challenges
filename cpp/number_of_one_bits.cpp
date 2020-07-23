// Up to 32 operations
// Functional bitwise shift

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int out = 0;
        while (n > 0) {
            if (n%2 != 0)
                out++;
            n /= 2;
        }
        return out;
    }
};