// O(N) runtime
class Solution {
public:
    string generateTheString(int n) {
        string s = "";
        if (n%2 == 0) {
            s += "x";
            n -= 1;
        }
        for (int i = 0; i < n; i++) {
            s += "y";
        }
        return s;
    }
};