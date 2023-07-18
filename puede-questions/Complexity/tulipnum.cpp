#include <stdio.h>
#include <cstring>
#include <algorithm>
#include <stdlib.h>

using namespace std;

//Complexity: O(n * q)

int main() {
    int testcases, tc;

    scanf("%i", &testcases);

    for (tc = 1; tc <= testcases; tc++){
        int n, q, i, x, y, start, end;
        scanf("%i %i", &n, &q);
        
        int arr[n];

        for (i = 0; i < n; i++) {
            scanf("%i", &arr[i]);
        }

        printf("Case %i:\n", tc);

        for (i = 0; i < q; i++) {
            scanf("%i %i", &start, &end);
            int count = 0;

            
            for(x = start-1; x < end; x++) {
                if (arr[x] > arr[x - 1]) {
                    count++;
                }
            }

            printf("%i\n", count);
        }
    }
}