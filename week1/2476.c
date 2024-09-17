#include <stdio.h>

int main() {
    int n, a, b, c, max = 0, count;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d %d", &a, &b, &c); 
        count = 0;
        if (a == b && b == c) count += 10000 + a * 1000;
        else if (a == b && b != c) count += 1000 + a * 100;
        else if (b == c && c != a) count += 1000 + b * 100;
        else if (c == a && a != b) count += 1000 + c * 100;
        else {
            if (a > b && a > c) count += a * 100;
            else if (b > a && b > c) count += b * 100;
            else if (c > a && c > b) count += c * 100;
        }
        if (max < count) max = count;
    }
    printf("%d\n", max);
}