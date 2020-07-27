// O(m+n+26)
// Linear runtime complexity

class Solution {
public:
    bool isAnagram(string s, string t) {
        int count[26] = {0};
        for (int i = 0; i < s.size(); i++) {
            count[s[i]-'a'] += 1;
        }
        for (int i = 0; i < t.size(); i++) {
            count[t[i]-'a'] -= 1;
        }
        for (int i = 0; i < 26; i++) {
            if (count[i] != 0)
                return false;
        }
        return true;
    }
};