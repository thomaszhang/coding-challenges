// O(N^2)
// Remove smallest pairs first
// If no pairs are left but string is not empty, string is invalid
class Solution {
public:
    bool isValid(string s) {
        // Remove [], {}, ()
        for (int i=0; i+1 < s.size(); i++) {
            if ((s[i] == '[' && s[i+1] == ']') || 
                (s[i] == '(' && s[i+1] ==')') || 
                (s[i] == '{' && s[i+1] == '}')) {
                s.erase(s.begin() + i);
                s.erase(s.begin() + i);
                i = -1;
            }
        }
        return (s.size() == 0);
    }
};