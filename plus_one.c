/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    // Input     [1,2,3]
    // Result  [0,1,2,3]
    *returnSize = 1 + digitsSize;
    int* result = (int*) malloc(*returnSize * sizeof(int));
    result[0] = 0;
    memcpy(&result[1], digits, digitsSize*sizeof(int));
    
    // Initial add
    int carry = (result[digitsSize] + 1) / 10;
    result[digitsSize] = (result[digitsSize] + 1) % 10;
    
    // Carry thru if needed
    for (int i = digitsSize-1; i >= 0; i--) {
        if (carry == 0)
            break;
        int temp = (result[i] + carry);
        result[i] = temp % 10;
        carry = temp / 10;
    }
    
    // Omit first element if zero
    if (result[0] == 0) {
        result = &result[1];
        *returnSize -= 1;
    }
    return result;
}
