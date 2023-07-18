#include <stdio.h>
#include <cstring>
#include <algorithm>
#include <stdlib.h>

using namespace std;

//Complexity: O(n^2 * q)

int main() {
    
    int n, q, i, j, x, y, start1, end1, start2, end2;
    scanf("%i", &n);
    
    int arr[n][n];

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%i", &arr[i][j]);
        }
    }

    scanf("%i", &q);

    for (i = 0; i < q; i++) {
        scanf("%i %i %i %i", &start1, &start2, &end1, &end2);
        int count = 0;

        
        for(x = start1 - 1; x <= end1 - 1; x++) {
            for (y = start2 - 1; y <= end2 - 1; y++) {
                if (x % 2 == 0 && y % 2 == 0 || x % 2 == 1 && y % 2 == 1) {
                    count += arr[x][y];
                }
                else {
                    count -= arr[x][y];
                }
            }
        }

        if (count < 0) {
            count -= (2 * count);
        }
        printf("%i\n", count);
    }
}