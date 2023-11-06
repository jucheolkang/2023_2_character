#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n, k, N, a = 0;
	while (scanf("%d %d", &n, &k) != EOF) {
		N = n;
		while (n >= k) {
			a += n / k;
			n = n / k + n % k;
		}
		printf("%d\n", N + a);
		a = 0;
	}
}