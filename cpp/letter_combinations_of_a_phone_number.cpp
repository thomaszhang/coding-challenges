// Permutation generation is O(N!)
class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> result;
        for (int i = 0; i < digits.size(); i++) {
            string possible = "";
            switch (digits[i]) {
                case '2':
                    possible = "abc";
                    break;
                case '3':
                    possible = "def";
                    break;
                case '4':
                    possible = "ghi";
                    break;
                case '5':
                    possible = "jkl";
                    break;
                case '6':
                    possible = "mno";
                    break;
                case '7':
                    possible = "pqrs";
                    break;
                case '8':
                    possible = "tuv";
                    break;
                case '9':
                    possible = "wxyz";
                    break;
                default:
                    break;
            }
            // if first number, add all possible elements
            if (result.size() == 0) {
                for (int j = 0; j < possible.size(); j++) {
                    result.push_back(string(1,possible[j]));
                }
            } else {
                // pop all current results
                int n = result.size();
                for (int j = 0; j < n; j++) {
                    string res = result[0];
                    result.erase(result.begin());
                    // branch each current result
                    // duplicate and add possibilties
                    for (int k = 0; k < possible.size(); k++) {
                        result.push_back(res + possible[k]);
                    }
                }
            }
        }
        return result;
    }
};