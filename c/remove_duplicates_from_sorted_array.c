int removeDuplicates(int* nums, int numsSize){
    // Empty case
    if (numsSize < 1)
        return 0;
    // Initial setup
    int newest_index = 1;
    int prev = nums[0];
    // Walk thru number array
    for (int i = 1; i < numsSize; i++) {
        // Found new number, move to front and set as prev
        if (nums[i]!=prev) {
            nums[newest_index] = nums[i];
            prev = nums[i];
            newest_index += 1;
        }
    }
    // Return number of new numbers seen
    return newest_index;
}
