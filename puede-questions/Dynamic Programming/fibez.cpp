#include <stdio.h>
#include <cstring>
#include <algorithm>
#include <stdlib.h>

using namespace std;


int main() {
    int testcases, tc;
    long long memo[1000000];
    const int modulo = 100000007;

    memset(memo, 0, sizeof(memo));
    memo[0] = 1;
    memo[1] = 1;

    scanf("%i", &testcases);

    for (tc = 0; tc < testcases; tc++){
        int n, i, ans, count;
        scanf("%i", &n);

        count = n - 1;

        while (memo[count] == 0) {
            count--;
        }
        count++;

        for(count; count < n; count++) {
            memo[count] = (memo[count-1] + memo[count-2]) % modulo;
        }

        printf("%lld\n", memo[n-1]);
    }
}