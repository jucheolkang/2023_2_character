#include <stdio.h>

int main() {
    int i, n, k, count = 0;
    scanf("%d %d", &n, &k);
    for (i = 1; i <= n; i++) {
        if (n % i == 0) count++;
        if (count == k) break;
    }
    if (i <= n) printf("%d\n", i);
    else printf("0\n");
}