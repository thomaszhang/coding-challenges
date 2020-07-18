int mySqrt(int x){
    // x == 0
    if (x == 0)
        return 0;
    // x > 0
    int curr = 1;
    // System of equations example
    //  x  curr    x/curr
    // 10 = 3.3  *    3.3
    // 10 =   2  *      5
    // 10 =   3  *   3.33
    //      *actual*
    // 10 =   4  *    2.5
    while ((x/(curr+1)) > curr) {
        curr += 1;
    }
    return curr;
}
