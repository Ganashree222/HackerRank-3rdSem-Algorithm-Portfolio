#include <stdio.h>

int birthdayCakeCandles(int candles_count, int* candles) {
    int max = candles[0];
    int count = 0;

    for (int i = 0; i < candles_count; i++) {
        if (candles[i] > max) {
            max = candles[i];
            count = 1;
        }
        else if (candles[i] == max) {
            count++;
        }
    }

    return count;
}

int main() {
    int n;
    scanf("%d", &n);

    int candles[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &candles[i]);
    }

    int result = birthdayCakeCandles(n, candles);

    printf("%d\n", result);

    return 0;
}
