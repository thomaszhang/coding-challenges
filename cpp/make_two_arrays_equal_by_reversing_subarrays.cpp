// Literally just the anagram problem
// O(N)
class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        int count[1000] = {0};
        // Target elements + 1, arr elements - 1
        for (int i = 0; i < target.size(); i++) {
            count[target[i]-1] += 1;
            count[arr[i]-1] -= 1;
        }
        // Elements cancel out if anagram
        for (int i = 0; i < 1000; i++) {
            if (count[i] != 0)
                return false;
        }
        return true;
    }
};