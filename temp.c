/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** generate(int numRows, int* returnSize, int** returnColumnSizes){
    // 1 * sizeof(int)
    // 2 * sizeof(int)
    // 3 * sizeof(int)
    // = (1 + numRows) / 2 * numRows * sizeof(int)
    int** result = (int**) malloc(numRows * sizeof(int*));
    returnColumnSizes = (int**) malloc(numRows * sizeof(int*));

    for (int i = 0; i < numRows; i++) {
        result[i] = (int*) malloc((i+1) * sizeof(int));
        for (int j = 0; j < i+1; j++) {
            result[j] = 1;
        }
    }
    return result;
}