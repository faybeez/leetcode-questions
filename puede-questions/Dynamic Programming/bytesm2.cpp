#include <stdio.h>
#include <cstring>
#include <algorithm>
#include <stdlib.h>

using namespace std;

int main() {
    int testcases, tc;

    scanf("%i", &testcases);

    for (tc = 0; tc < testcases; tc++){
        int row, col, akhir = 0, i, n;
        scanf("%i %i", &row, &col);

        int arr[row][col], memo[row][col];
        memset(memo, 0, sizeof(memo));

        for (i = 0; i < row; i++) {
            for (n = 0; n < col; n++) {
                scanf("%i", &arr[i][n]);
            }
        }

        //copy string pertama
        for (n = 0; n < col; n++) {
            memo[0][n] = arr[0][n];
        }

        for (i = 1; i < row; i++) {
            for (n = 0; n < col; n++) {
                if (n == 0) {
                    memo[i][n] = arr[i][n] + max(memo[i-1][n], memo[i-1][n+1]);
                }
                else if (n == col - 1) {
                    memo[i][n] = arr[i][n] + max(memo[i-1][n], memo[i-1][n-1]);
                }
                else {
                    memo[i][n] = arr[i][n] + max(memo[i-1][n], max(memo[i-1][n-1], memo[i-1][n+1]));
                }
            }
        }

        for (n = 0; n < col; n++) {
            if (akhir < memo[row - 1][n]) {
                akhir = memo[row - 1][n];
            }
        }

        printf("%i\n", akhir);
    }
}