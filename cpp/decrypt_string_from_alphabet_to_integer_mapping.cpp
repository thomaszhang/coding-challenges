// O(N) runtime
class Solution {
public:
    string freqAlphabets(string s) {
        string result = "";
        for (int i = 0; i < s.size(); i++) {
            if (i+2 < s.size() && s[i+2] == '#') {
                result += 'j' + stoi(s.substr(i,2)) - 10;
                i += 2;
            } else if (s[i] >= '1' && s[i] <= '9') {
                result += 'a' + s[i] - '1'; 
            }
        }
        return result;
    }
};