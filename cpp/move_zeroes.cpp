class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int lim = nums.size();
        for (int i = 0; i < lim; i++) {
            if (nums[i] == 0) {
                // Move zero
                nums.push_back(0);
                // Remove zero
                nums.erase(nums.begin() + i);
                lim -= 1;
                i -= 1;
            }
        }
    }
};
