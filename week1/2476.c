#include <stdio.h>

int main() {
    int n, a, b, c, max = 0, sum[1001] = { 0 };
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d %d", &a, &b, &c);
        if (a == b && b == c) {
            sum[i] += 10000 + (a * 1000);
        } else if (a == b && b != c) {
            sum[i] += 1000 + (a * 100);
        } else if (b == c && c != a) {
            sum[i] += 1000 + (b * 100);
        } else if (c == a && a != b) {
            sum[i] += 1000 + (c * 100);
        } else {
            if (a < b && b < c) {
                sum[i] += c * 100;
            } else if (b < a && a < c) {
                sum[i] += c * 100;
            } else if (b < c && c < a) {
                sum[i] += a * 100;
            } else if (c < b && b < a) {
                sum[i] += a * 100;
            } else if (c < a && a < b) {
                sum[i] += b * 100;
            } else if (a < c && c < b) {
                sum[i] += b * 100;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        if (max < sum[i]) max = sum[i];
    }
    printf("%d\n", max);
}