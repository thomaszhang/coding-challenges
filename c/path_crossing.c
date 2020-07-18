// Linked list
struct Node {
    int id;
    struct Node* next;
};

bool search(struct Node* root, int target) {
    struct Node* curr = root;
    while (curr != NULL) {
        if (curr->id == target)
            return true;
        curr = curr->next;
    }
    return false;
}

bool isPathCrossing(char * path){
    int range = 2 * strlen(path) + 1;
    int x = strlen(path);
    int y = strlen(path);
    
    // Log 0,0
    struct Node* history = (struct Node*) malloc(sizeof(struct Node));
    history->id = x * range + y; history->next = NULL;
    struct Node* last = history;
    
    for (int i = 0; i < strlen(path); i++) {
        // Calculate navigation
        switch(path[i]) {
            case 'N':
                y++;
                break;
            case 'S':
                y--;
                break;
            case 'E':
                x++;
                break;
            case 'W':
                x--;
                break;
            default: 
                break;
        }
        // Check history
        if (!search(history, x*range+y)) {
            last->next = (struct Node*) malloc(sizeof(struct Node));
            last->next->id = x*range+y; last->next->next = NULL;
            last = last->next;
        } else {
            return true;
        }
    }
    return false;
}

// Memory Intensive Solution 
/* 
bool isPathCrossing(char * path){
    // History is a 2D -> 1D boolean array
    int range = 2 * strlen(path) + 1;
    bool* history = (bool*) malloc(range * range * sizeof(bool));
    memset(history, false, range * range * sizeof(bool));
    
    int x = strlen(path);
    int y = strlen(path);
    // Log 0,0
    history[x*range + y] = true;
    
    for (int i = 0; i < strlen(path); i++) {
        // Calculate navigation
        switch(path[i]) {
            case 'N':
                y++;
                break;
            case 'S':
                y--;
                break;
            case 'E':
                x++;
                break;
            case 'W':
                x--;
                break;
            default: 
                break;
        }
        // Check history
        if (!history[x*range + y]) {
            history[x*range + y] = true;
        } else {
            return true;
        }
    }
    return false;
} */
