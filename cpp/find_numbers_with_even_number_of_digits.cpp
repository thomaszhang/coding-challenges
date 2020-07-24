class Solution {
public:
    // 1 <= n <= 10^5
    int digits(int n) {
        int digits = 0;
        while (n > 0) {
            digits++;
            n /= 10;
        }
        return digits;
    }
    
    int findNumbers(vector<int>& nums) {
        int c = 0;
        for (int i = 0; i < nums.size(); i++) {
            // Increment when even # of digits
            if (digits(nums[i])%2 == 0)
                c++;
        }
        return c;
    }
};