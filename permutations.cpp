// Generating permutations is O(N!) complexity
class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> v;
        // Base case
        if (nums.size() == 0) // Do not generate anything
            return v;
        if (nums.size() == 1) { // Generate single permutation
            vector<int> p;
            p.push_back(nums[0]);
            v.push_back(p);
            return v;
        }
        // Recursive case: concat each element with all its sub-permutations
        for (int i = 0; i < nums.size(); i++) {
            // Pick one element
            vector<int> clone = nums;
            clone.erase(clone.begin() + i);
            // Generate corresponding sub-permutations 
            vector<vector<int>> children = permute(clone);
            // Append this element to all corresponding permutations
            for (int j = 0; j < children.size(); j++) {
                vector<int> p; // Stores concatenated permutation
                p.push_back(nums[i]);
                for (int k = 0; k < children[j].size(); k++) {
                    p.push_back(children[j][k]);
                }
                v.push_back(p); // Add to result
            }
        }
        return v;
    }
};