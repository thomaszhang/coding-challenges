int romanToInt(char * s){
    int out = 0;
    // Calculate total
    for (int i=0; i<strlen(s); i++) {
        if (s[i] == 'M')
            out += 1000;
        if (s[i] == 'D')
            out += 500;
        if (s[i] == 'C')
            out += 100;
        if (s[i] == 'L')
            out += 50;
        if (s[i] == 'X')
            out += 10;
        if (s[i] == 'V')
            out += 5;
        if (s[i] == 'I')
            out += 1;
    }
    // Subtraction cases
    for (int i=0; i<(strlen(s)-1); i++) {
        if ((s[i] == 'I') && (s[i+1] =='V')) { 
            out += -2; i++; 
        }
        if ((s[i] == 'I') && (s[i+1] == 'X')) {
            out += -2; i++; 
        }
        if ((s[i] == 'X') && (s[i+1] == 'L')) {
            out += -20; i++; 
        }
        if ((s[i] == 'X') && (s[i+1] == 'C')) {
            out += -20; i++; 
        }
        if ((s[i] == 'C') && (s[i+1] == 'D')) {
            out += -200; i++; 
        }
        if ((s[i] == 'C') && (s[i+1] == 'M')) {
            out += -200; i++; 
        }
    }
    return out;
}
