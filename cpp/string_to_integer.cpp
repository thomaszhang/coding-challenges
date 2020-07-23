class Solution {
public:
    int charToI(char c) {
        switch(c) {
            case '0':
                return 0;
            case '1':
                return 1;
            case '2':
                return 2;
            case '3':
                return 3;
            case '4':
                return 4;
            case '5':
                return 5;
            case '6':
                return 6;
            case '7':
                return 7;
            case '8':
                return 8;
            case '9':
                return 9;
            default:
                break;
        }
        return -1;
    }
    
    int myAtoi(string str) {
        int i = 0;
        // Skip white space
        while (str[i] == ' ') {
            i++;
        }
        // Check for optional +/-
        bool negative = false;
        if (str[i] == '-') {
            negative = true;
            i++;
        } else if (str[i] == '+') {
            i++;
        }
        // Until reach end
        int result = 0; 
        while (i < str.size()) {
            int temp = charToI(str[i]);
            // Encountered end of digits
            if (temp == -1)
                break;
            // Catch tens overflow
            if (result >= 214748365)
                return negative ? INT_MIN : INT_MAX;
            result *= 10;
            // Catch digit overflow
            if (result == 2147483640) {
                if (negative && temp >= 8)
                    return INT_MIN;
                if (!negative && temp >= 7)
                    return INT_MAX;
            }
            result += temp;
            i++;
        }
        return negative ? -result : result;
    }
};
