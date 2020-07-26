// O(N), updating count via hash map and tracking most common element
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> elementCount;
        int majorityCount = -1;
        int majorityElement = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (elementCount.find(nums[i]) == elementCount.end()) {
                // Never seen
                elementCount[nums[i]] = 0;  
            } else {
                elementCount[nums[i]] += 1;
            }
            // Update majority element if needed
            if (elementCount[nums[i]] > majorityCount) {
                majorityCount = elementCount[nums[i]];
                majorityElement = nums[i];
            }
        }
        return majorityElement;
    }
};