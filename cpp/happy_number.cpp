class Solution {
public:
    bool isHappy(int n) {
        // Seen set
        unordered_set<int> history;
        // While generating new values
        while (history.find(n) == history.end()) {
            // Happy number case
            if (n == 1) {
                return true;
            }
            // Add to history
            history.insert(n);
            // Update
            n = getDigitSum(n);
        }
        // Cycle detected
        return false;
    }
    
    int getDigitSum(int n) {
        int sum = 0;
        while (n > 0) {
            int digit = n % 10;
            n /= 10;
            sum += digit*digit;
        }
        return sum;
    }
};
