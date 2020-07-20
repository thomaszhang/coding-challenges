// O(N) solution
// Unordered map to allow lookup of previous elements with O(1)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v;
        unordered_map<int, int> seenSet;
        for (int i=0; i<nums.size(); i++) {
            if (seenSet.find(target-nums[i]) == seenSet.end()) {
                // Not possible for current element to add up with previous element
                seenSet[nums[i]] = i;
            } else {
                // Current + previous = target; return
                v = {seenSet[target-nums[i]], i};
                break;
            }
        }
        return v;
    }
};

// O(N^2) solution
// Nested loop checks all permutations for condition match
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v;
        // Nested loop match condition
        for (int i=0; i<nums.size(); i++) {
            for (int j=i+1; j<nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                    v = {i,j};
                    break;
                }
            }
        }
        return v;
    }
};
