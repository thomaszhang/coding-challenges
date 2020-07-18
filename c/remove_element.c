int removeElement(int* nums, int numsSize, int val){
    // Base cases
    if (numsSize < 1) 
        return 0;
    
    // Recursive case
    if (nums[0] != val) {
        // No swap, is non-val. increment non-val counter
        return 1 + removeElement(&nums[1], numsSize-1, val);
    } else {
        // Swap, look for next non-val element
        for (int i = 0; i < numsSize; i++) {
            if (nums[i] != val) {
                // Found non-val, swap, increment non-val counter
                nums[0] = nums[i];
                nums[i] = val;
                return 1 + removeElement(&nums[1], numsSize-1, val);
            }
        }
        // No non-val elements remaining, do not increment
        return removeElement(&nums[1], numsSize-1, val);
    }
}
