/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** transpose(int** matrix, int matrixSize, int* matrixColSize, int* returnSize, int** returnColumnSizes) {
    // Allocate memory for the transposed matrix
    int** t = (int**)malloc(*matrixColSize * sizeof(int*));
    for (int i = 0; i < *matrixColSize; i++) {
        t[i] = (int*)malloc(matrixSize * sizeof(int));
    }
    // Populate the transposed matrix
    for (int i = 0; i < matrixSize; i++) {
        for (int j = 0; j < *matrixColSize; j++) {
            t[j][i] = matrix[i][j];
        }
    }
    // Set the return values
    *returnSize = *matrixColSize;
    *returnColumnSizes = (int*)malloc(*matrixColSize * sizeof(int));
    for (int i = 0; i < *matrixColSize; i++) {
        (*returnColumnSizes)[i] = matrixSize;
    }
    // Return the transposed matrix
    return t;
}

