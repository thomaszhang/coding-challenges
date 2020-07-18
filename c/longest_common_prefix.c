char * longestCommonPrefix(char ** strs, int strsSize){
    if (strsSize < 1)
        return "";
    if (strlen(strs[0]) < 1)
        return "";
    // Initial prefix = entire first string
    char* out = (char*) malloc(strlen(strs[0]) + 1);
    strcpy(out, strs[0]);
    
    for (int i = 0; i < strlen(out); i++) {
        for (int j = 0; j < strsSize; j++) {
            // End of common prefix reached
            if (out[i] != strs[j][i]) {
                // Terminate string at nonmatching element
                out[i] = '\0';
                return out;
            }
        }
    }
    // No modification made
    return out;
}

// sizeof(char*) returns size of pointer, not null terminated array
// char* out = (char*) malloc(sizeof(strs[0]));
