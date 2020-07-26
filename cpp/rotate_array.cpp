// Iterative
// Poor runtime, great memory usage
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        for (int i = 0; i < k; i++) {
            nums.insert(nums.begin(), nums.back());
            nums.pop_back();
        }
    }
};

// Recursive
// Poor performance, poor memory usage
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if (k == 0)
            return;
        nums.insert(nums.begin(), nums.back());
        nums.pop_back();
        rotate(nums, k-1);
    }
};