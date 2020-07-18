int lengthOfLastWord(char * s){
    int length = 0;
    bool start = false;
    for (int i = strlen(s)-1; i >= 0; i--) {
        // Ignore trailing spaces
        if (s[i] == ' ' && !start)
            continue;
        // End at space after nonspace encountered
        if (s[i] == ' ' && start)
            break;
        // Start counting at nonspace
        if (s[i] != ' ') {
            start = true;
            length += 1;   
        }
    }
    return length;
}
