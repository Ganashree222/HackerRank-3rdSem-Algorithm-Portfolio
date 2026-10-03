#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int maximumToys(int prices_count, int* prices, int k) {
    qsort(prices, prices_count, sizeof(int), compare);

    int count = 0;
    int total = 0;

    for (int i = 0; i < prices_count; i++) {
        if (total + prices[i] <= k) {
            total += prices[i];
            count++;
        } else {
            break;
        }
    }

    return count;
}

int main() {
    int n, k;

    scanf("%d %d", &n, &k);

    int prices[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &prices[i]);
    }

    printf("%d\n", maximumToys(n, prices, k));

    return 0;
}
