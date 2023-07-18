#include <stdio.h>
#include <algorithm>
#include <cstring>

int main() {
    int len, i, count = 0, ans = 0, limit, memo_open = 0;
    scanf("%i %i", &len, &limit);
    int arr[len];

    for (i = 0; i < len; i++) {
        scanf("%i", &arr[i]);
    }

    i = 0;

    while (i < len) {
        count += arr[i];
        while (count > limit) {
            count -= arr[memo_open];
            memo_open ++;
        }

        if (ans < count) {
            ans = count;
        }
        i++;
    }

    printf("%i", ans);
}