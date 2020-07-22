class Solution {
public:
    bool isPerfectSquare(int num) {
        bool surpassed = false;
        int i = 1;
        while (!surpassed) {
            if (num/i == i && num%i == 0) {
                // Matched
                return true;
            }
            // Surpassed without matching
            if (i > num/i) {
                surpassed = true;
            }
            i += 1;
        }
        return false;
    }
};

// i*i > num
// i > num/i
