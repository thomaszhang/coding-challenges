void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
    // nums1 = [1,2,3,0,0,0], m = 3
    // nums2 = [2,5,6],       n = 3
    // Index of unused space in nums1: [n:n+m]
    int a = 0;
    int b = 0;
    int* nums1copy = (int*) malloc(m*sizeof(int));
    memcpy(nums1copy, nums1, m*sizeof(int));
    // Both full
    while (a<m && b<n) {
        if (nums1copy[a] > nums2[b]) {
            // Pick n2: n2 smaller
            nums1[a+b] = nums2[b];
            b++;
        } else {
            // Pick n1: default
            nums1[a+b] = nums1copy[a];
            a++;
        }
    }
    // Fill with rest of n2
    while (b<n) {
        nums1[a+b] = nums2[b];
        b++;
    } 
    // Fill with rest of n1
    while (a<m) {
        nums1[a+b] = nums1copy[a];
        a++;
    }
}
