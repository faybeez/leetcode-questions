#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	int testcases, tc, row, col;
    bool add0;
    // 1 = right, 2 = down, 3 = left, 4 = up

    scanf("%i", &testcases);

    for (tc = 1; tc <= testcases; tc++) {
        int i = 0, n = 0, count, direct = 1, spiral = 0;
        scanf("%i %i", &row, &col);
        int arr[row][col];

        if (row * col >= 10) {
            add0 = true;
        }
        else {
            add0 = false;
        }

        for (count = 1; count <= row * col; count++) {
            arr[i][n] = count;
            switch (direct) {
                case 1:
                    n++;
                    break;
                case 2:
                    i++;
                    break;
                case 3:
                    n--;
                    break;
                case 4:
                    i--;
                    break;
            }

            if (n < 0 + spiral) {
                direct++;
                n++;
                i--;
            }
            else if (n > col - 1 - spiral) {
                direct++;
                n--;
                i++;
            }
            else if (i <= 0 + spiral && direct == 4) {
                direct = 1;
                spiral++;
                i++;
                n++;
            }
            else if (i > row - 1 - spiral) {
                direct++;
                i--;
                n--;
            }
        }

        //print
        printf("Case %i:\n", tc);
        if (add0) {
            for (i = 0; i < row; i++) {
                for (n = 0; n < col; n++) {
                    if (arr[i][n] / 10 == 0) {
                        printf("0%i", arr[i][n]);
                    }
                    else {
                        printf("%i", arr[i][n]);
                    }
                    if (n < col - 1) {
                        printf(" ");
                    }
                }
                printf("\n");
            }
        }
        else {
            for (i = 0; i < row; i++) {
                for (n = 0; n < col; n++) {
                    printf("%i", arr[i][n]);
                    if (n < col - 1) {
                        printf(" ");
                    }
                }
                printf("\n");
            }
        }
    }

	return 0;
}