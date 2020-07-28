// String solution (optimal)
class Solution {
public:
    int maximum69Number (int num) {
        string s = to_string(num);
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '6') {
                s[i] = '9';
                return stoi(s);
            }
        }
        return num;
    }
};

// Math solution
class Solution {
public:
    int maximum69Number (int num) {
        if (num / 1000 == 6)
            return num + 3000;
        if ((num%1000) / 100 == 6)
            return num + 300;
        if ((num%100) / 10 == 6)
            return num + 30;
        if ((num%10) / 1 == 6)
            return num + 3;
        return num;
    }
};