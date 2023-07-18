#include <stdio.h>
#include <algorithm>
#include <cstring>

int main() {
    int len, i, n, count, ans = 1;
    scanf("%i", &len);
    int arr[len], memo[len];

    for (i = 0; i < len; i++) {
        memo[i] = 1;
    }

    for (i = 0; i < len; i++) {
        scanf("%i", &arr[i]);
    }

    for (i = 0; i < len; i++) {
        count = 1;
        for (n = 0; n < i; n++) {
            if (arr[n] < arr[i] && count < memo[n]) {
                count = memo[n];
            }
        }

        memo[i] += count;
        if (ans < count) {
            ans = count;
        }
    }

    printf("%i", ans);
}