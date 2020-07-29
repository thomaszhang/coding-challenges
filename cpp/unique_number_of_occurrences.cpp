// O(N^2) runtime
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> freq;
        vector<int> seen;
        for (int& i : arr) {
            if (freq.find(i) == freq.end()) {
                // Never seen before
                seen.push_back(i);
                freq[i] = 1;
            } else {
                // Seen before
                freq[i] += 1;
            }
        }
        // Check combinations of seen count for match
        for (int i = 0; i < seen.size()-1; i++) {
            for (int j = i+1; j < seen.size(); j++) {
                // Not unique count
                if (freq[seen[i]] == freq[seen[j]])
                    return false;
            }
        }
        // Unique
        return true;
    }
};