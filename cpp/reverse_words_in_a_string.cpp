class Solution {
public:
    vector<string> v;
    
    string reverseWords(string s) {
        int state = 0; // 0 waiting for next word start, 1 word started
        string word = "";
        for (int i = 0; i < s.size(); i++) {
            // 0->1 Start logging word
            if (state == 0 && s[i] != ' ') {
                state = 1; 
            }
            // 1->0 End logging word
            if (state == 1 && (s[i] == ' ' || i == s.size()-1)) {
                state = 0;
                if (i == s.size()-1 && s[i] != ' ')
                    word += s[i];
                v.push_back(word);
                word = "";
            }
            // 1 Log word
            if (state == 1) {
                word += s[i];
            }
        }
        
        // Create output string
        word = "";
        for (int i = v.size()-1; i >= 0; i--) {
            if (i != v.size()-1)
                word += " ";
            word += v[i];
        }
        return word;
    }
};