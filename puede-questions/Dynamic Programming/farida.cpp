#include <stdio.h>
#include <cstring>
#include <algorithm>
#include <stdlib.h>

using namespace std;

int main() {
    int testcases, tc;

    scanf("%i", &testcases);

    for (tc = 0; tc < testcases; tc++){
        int len, i;
        scanf("%i", &len);
        int arr[len + 1];
        long long memo[len + 1];


        arr[0] = 0;
        memo[0] = 0;

        for (i = 1; i <= len; i++) {
            scanf("%i", &arr[i]);
        }

        memset(memo, 0, sizeof(memo));

        memo[1] = arr[1];

        for (i = 2; i <= len; i++) {
            memo[i] = max(memo[i-1], memo[i-2] + arr[i]);
        }

        printf("Case %i: %lld\n", tc + 1, memo[len]);
    }
}