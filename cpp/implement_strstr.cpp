// ~O(N) time complexity
// Shifting two arrays and comparing from beginning

class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle == "")
            return 0;
        // Default index
        int found = -1;
        // Two pointers, one for haystack and needle
        int n = 0;
        int startedNeedle = 0;
        for (int i = 0; i < haystack.size(); i++) {
            // Reached end of needle & last character matches
            if (n == needle.size()-1 && haystack[i] == needle[n]) {
                found = i - needle.size() + 1;
                break;
            }
            if (haystack[i] != needle[n]) {
                // Resume haystack match
                if (n > 0) 
                    i = startedNeedle + 1;
                // Reset needle progress
                n = 0;
            } 
            if (haystack[i] == needle[n]) {
                // Start needle progress, pause haystack match
                if (n == 0)
                    startedNeedle = i;
                // Continue needle progress
                n++;
            }
        }
        return found;
    }
};