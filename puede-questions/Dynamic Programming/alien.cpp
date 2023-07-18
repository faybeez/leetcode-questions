#include <stdio.h>
#include <cstring>
#include <algorithm>
#include <stdlib.h>

using namespace std;

int main() {
    int testcases, tc;

    scanf("%i", &testcases);

    for (tc = 0; tc < testcases; tc++){
        int len, i, count = 0, ans = 100000, limit, memo_open = 0, memo_stations = 0;
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

            if (memo_stations < i - memo_open + 1) {
                ans = count;
                memo_stations = i - memo_open + 1;
            }
            else if (memo_stations == i - memo_open + 1 && ans > count) {
                ans = count;
                memo_stations = i - memo_open + 1;
            }
            i++;
        }

        printf("%i %i\n", ans, memo_stations);
    }
}