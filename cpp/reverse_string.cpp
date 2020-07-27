// O(N), walk thru half of elements

class Solution {
public:
    void reverseString(vector<char>& s) {
        int len = s.size();
        // Start to mid (inclusion of middle element does not affect symmetry)
        for (int i = 0; i < len/2; i++) {
            // Swap corresponding elements
            swap(s[i], s[len-i-1]);
        }
    }
};