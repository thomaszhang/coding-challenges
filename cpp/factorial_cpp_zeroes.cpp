// Every time {2,5} factors are passed, an additional zero is in output
class Solution {
public:
    int trailingZeroes(int n) {
        int zeroes = 0;
        while (n > 0) {
            zeroes += n/5;
            n /= 5;
        }
        return zeroes;
    }
};