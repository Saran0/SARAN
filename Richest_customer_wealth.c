int maximumWealth(int** accounts, int accountsSize, int* accountsColSize) {
    int max = 0;
    for (int i = 0; i < accountsSize; i++) {
        int c = 0;
        for (int j = 0; j < accountsColSize[i]; j++) {
            c += accounts[i][j];
        }
        if (c > max) {
            max = c;
        }
    }
    return max;
}
