int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    
    // Allocate output
    *returnSize = 2;
    int* out = (int*) malloc(2 * sizeof(int));
    
    // Solve
    for (int i=0; i<numsSize; i++) {
        for (int j=i+1; j<numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                out[0] = i;
                out[1] = j;
                return out;
            }
        }
    }
    return NULL;
}
