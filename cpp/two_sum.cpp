// O(N^2) solution
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
