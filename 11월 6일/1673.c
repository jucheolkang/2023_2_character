#include <stdio.h>

int main() {
    int n, k, chicken;
    while (scanf_s("%d %d", &n, &k) != EOF) {
        chicken = n;
        while (n >= k) { 
            chicken = chicken + n / k;
            n = (n / k) + (n % k);
        }
        printf("%d\n", chicken);
    }
}