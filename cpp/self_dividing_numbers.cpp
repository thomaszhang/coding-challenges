// O(N) to generate
// O(1) to prune each element
class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> v;
        // Check each element
        for (int i = left; i <= right; i++) {
            string s = to_string(i);
            for (int j = 0; j < s.size(); j++) {
                if (s[j] == '0')
                    goto nope;
                if (i % int(s[j] - '0') != 0)
                    goto nope;
            }
            v.push_back(i);
            nope:
            continue;
        }
        return v;
    }
};