/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int* runningSum(int* nums, int numsSize, int* returnSize){
    
    // Define size of output
    *returnSize = numsSize;
    int* output = malloc(*returnSize * sizeof(int));
    
    // Output index = 0
    output[0] = nums[0];
    // Output index > 0
    for (int i = 1; i < numsSize; i++) {
        output[i] = output[i-1] + nums[i];
    }
    return output;
}
