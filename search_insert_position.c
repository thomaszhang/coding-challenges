int searchInsert(int* nums, int numsSize, int target) {
    for (int i = 0; i < numsSize; i++) {
        // Found match
        if (nums[i] == target) {
            return i;
        }
        // Found turning point
        if (nums[i] > target)
            return i;
        // Target > all elements
        if (i == numsSize-1)
            return numsSize;
    }
    // Empty array
    return 0;
}
