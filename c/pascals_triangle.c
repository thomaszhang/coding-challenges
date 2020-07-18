/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** generate(int numRows, int* returnSize, int** returnColumnSizes){
    // Allocate output arrays
    int** result = calloc(numRows,sizeof(int*));
    *returnSize = numRows;
    *returnColumnSizes = (int*) calloc(numRows,sizeof(int));
    if (numRows <= 0) 
        return result;
    for (int i = 0; i < numRows; i++) {
        // Populate row elements and return row length
        result[i] = calloc(i+1,sizeof(int));
        (*returnColumnSizes)[i] = i+1;
        // First element = 1
        result[i][0] = 1; 
        for (int j = 1; j < i; j++) {
            //  Mid elements guaranteed to have two parents
            result[i][j] = result[i-1][j-1] + result[i-1][j];
        }
        // Last element = 1
        result[i][i] = 1;
    }
    return result;
}
