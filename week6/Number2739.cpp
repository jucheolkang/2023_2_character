#include <stdio.h>

int main(void) {
	int a = 0;

	scanf_s("%d", &a);
	for (int i = 1; i < 10; i++) {
		printf("%d * %d = %d\n", a, i, a * i);
	}

	getchar();
	getchar();
	return 0;
}
