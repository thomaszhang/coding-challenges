class Solution {
public:
    bool isPowerOfTwo(int n) {
        // Catch 2/2 = 1
        if (n == 1) {
            return true;
        }
        // Catch odd, zero, negative
        if (n <= 0 || n%2 != 0) {
            return false;
        }
        return isPowerOfTwo(n/2);
    }
};
