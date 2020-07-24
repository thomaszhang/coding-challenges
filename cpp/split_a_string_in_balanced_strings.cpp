class Solution {
public:
    int balancedStringSplit(string s) {
        int balance = 0;
        int splitCount = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'R')
                balance += 1;
            else
                balance -= 1;
            if (balance == 0)
                splitCount += 1;
        }
        return splitCount;
    }
};