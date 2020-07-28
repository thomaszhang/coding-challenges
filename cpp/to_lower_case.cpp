/*  Find out why "if (str[i] >= 'A' && str[i] <= 'Z')" is needed?

    Line 64: Char 16: runtime error: index -123 out of bounds for type 'std::__cxx11::string [256]' (_Serializer_.cpp)
    SUMMARY: UndefinedBehaviorSanitizer: undefined-behavior _Serializer_.cpp:73:16
*/

class Solution {
public:
    string toLowerCase(string str) {
        for (int i = 0; i < str.size(); i++) {
            if (str[i] >= 'A' && str[i] <= 'Z')
                str[i] = char(int(str[i])+32);
        }
        return str;
    }
};