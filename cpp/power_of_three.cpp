class Solution {
public:
    bool isPowerOfThree(int n) {
        // Catch 3/3 = 1
        if (n == 1)
            return true;
        // Exit when <= 0 or indivisible by 3
        if (n <= 0 || n%3 != 0)
            return false;
        return isPowerOfThree(n/3);
    }
};
