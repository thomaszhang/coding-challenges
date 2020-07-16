// Linked list stack implementation
struct Node {
    int val;
    int index;
    struct Node* child;
};

struct Node* push(struct Node* stack, int val, int index) {
    struct Node* newstack = malloc(sizeof(struct Node));
    newstack->val = val;
    newstack->index = index;
    newstack->child = stack;
    return newstack;
}

struct Node* pop(struct Node* stack) {
    return stack->child;
}

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int* dailyTemperatures(int* T, int TSize, int* returnSize){
    // Initialize output array
    *returnSize = TSize;
    int* out = (int*) malloc(TSize * sizeof(int));
    
    /* Stack: holds history of maximums
       - pop if current element > top element
       - top: most recent maximum
       - bottom: oldest maximum (max in stack)
    */
    struct Node* stack = NULL;
    
    // Walk days from last to first
    for (int i = TSize-1; i >= 0; i--) {
        if (stack==NULL) {
            // Last element (only runs once)
            stack = push(stack, T[i], i);
            out[i] = stack->index - i;
        } else {
            // Pop lesser elements on stack
            while (stack != NULL && T[i] >= stack->val) {
                stack = pop(stack);
            }
            // Add current element
            stack = push(stack, T[i], i);
            // Days until next warmer day (depends on if T[i] > entire stack)
            out[i] = (stack->child == NULL) ? stack->index - i : stack->child->index - i;
        }
    }
    return out;
}

// Polynomial solution 
/*
int* dailyTemperatures(int* T, int TSize, int* returnSize){
    *returnSize = TSize;
    // Copy int array
    int* out = (int*) malloc(TSize * sizeof(int));
    memcpy(out, T, TSize*sizeof(int));
    // Calculate in place
    for (int i = 0; i < *returnSize; i++) {
        out[i] = 0;
        for (int j = i+1; j < *returnSize; j++) {
            // Reached higher
            if (out[j] > T[i]) {
                out[i] = j-i;
                break;
            }
        }
    }
    return out;
}
*/



