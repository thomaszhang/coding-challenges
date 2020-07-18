// Example nums = [4, 1, 2, 1, 2]

// 1 xor 1 = 0
// 1 xor 0 = 1
// 0 xor 1 = 1
// 0 xor 0 = 0

int singleNumber(int* nums, int numsSize){
    int output = 0;
    for (int i = 0; i < numsSize; i++) {
        output = output ^ nums[i]; // XOR cancels out duplicates
    }
    return output;
}
