bool isPalindrome(int x){
    int val = x;
    
    // Negative -> false
    if (x < 0)
        return false;
    
    // Get digit count    
    int numOfDigits = 0;
    while (val > 0) {
        numOfDigits += 1;
        val = val/ 10;
    }
    // Put digits in int array
    int* arr = (int*) malloc(numOfDigits * sizeof(int));
    for (int i=0; i<numOfDigits; i++) {
        arr[i] = x%10;
        x = x/10;
    }
    // Check palindrome
    int mid = numOfDigits / 2;
    for (int i=0; i<mid; i++) {
        if (arr[i] != arr[numOfDigits-1-i])
            return false;
    }
    return true;
    
    
}
