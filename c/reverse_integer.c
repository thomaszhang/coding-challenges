int reverse(int x){
    int rev = 0;
    // Check negativity
    bool isNegative = false;
    if (x < 0) {
        isNegative = true;
        // -INT_MIN > INT_MAX, overflow
        if (x == INT_MIN) {
            return 0;
        }
        x = -x;
    }
    
    // Reverse
    while (x > 0) {
        // Check overflow before generating - INT_MAX = 2147483647
        // Exceeds INT_MAX tens
        if ((rev >= 214748365))
            return 0;
        // Exceeds INT_MAX ones
        if ((rev == 214748364) & (x%10 >= 8) & !isNegative)
            return 0;
        // Exceeds INT_MIN
        if ((rev == 214748364) & (x%10 == 9) & isNegative)
            return 0;
        
        // Left shift reverse ++
        rev = rev*10 + x%10;
        // Right shift normal --
        x = x/10;
    }
    return isNegative ? -rev : rev;
}
