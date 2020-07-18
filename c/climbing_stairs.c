// Problem represented by fibonacci
int climbStairs(int n) {
    int z0 = 0;
    int z1 = 1;
    for (int i = 0; i < n; i++) {
        int temp = z0 + z1;
        z0 = z1;
        z1 = temp;
    }
    return z1;
}

// i     = 1 2 3 4 5  6  7 
// total = 1 2 3 5 8 13 21

/* Branch recursion (~ exponential complexity) */

int climbStairsBranch(int n) {
    // Base cases
    if (n == 0)
        return 1;
    if (n < 0)
        return 0;
    // Branch recursion
    return climbStairs(n-2) + climbStairs(n-1);
}
