// Input [-2,1,-3,4,-1,2,1,-5,4]
// Output [4,-1,2,1] -> 6

// Brute force solution O(N^2)
int maxSubArray(int* nums, int numsSize){
    // Array A contains some maximum subarray M
    // A = {S1, M, S2}
    int max = INT_MIN;
    for (int i = 0; i < numsSize; i++) {
        int runningSum = 0;
        for (int j = i; j < numsSize; j++) {
            runningSum += nums[j];
            if (runningSum > max)
                max = runningSum;
        }
    }
    return max;
}

// Did not work
// int maxSubArray(int* nums, int numsSize){
//     // Array A contains some maximum subarray M
//     // A = {S1, M, S2}
//     int max = nums[0];

//     int start = 0;
//     int aSum = 0;
//     int aMin = 0;
//     for (int i = 0; i < numsSize; i++) {
//         aSum += nums[i];
//         // If current rolling sum is smaller than previous minimum
//         // Push forward start point
//         if (aSum < aMin) {
//             aMin = aSum;
//             start = i;
//         }
//         if (nums[i] > max)
//             max = nums[i];
//     }
//     // start = numsSize-1 -> array is size 0 or maximum is a single element
//     // start != numsSize-1 -> maximum is in {M, S2}
//     if (start == numsSize-1)
//         return max; 
//     start += 1;

//     int bSum = 0;
//     int bMax = 0;
//     for (int i = start; i < numsSize; i++) {
//         bSum += nums[i];
//         // If current rolling maximum is smaller than previous maximum
//         // Update M maximum
//         if (bSum > bMax) {
//             bMax = bSum;
//         }
//     }
//     // End it
//     return (max > bMax) ? max : bMax;
// }
