#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n = 0;
	int k = 0;
	int count = 0;

	scanf("%d %d", &n, &k);
	for (int i = 1; i < 100000; i++) {
		if (n % i == 0) {
			count++;
		}
		if (count == k) {
			printf("%d", i);
			break;
		}
	}
	if (count < k) printf("0");
}