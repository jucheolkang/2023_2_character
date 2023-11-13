#include <stdio.h>

int main(void) {
	int A[10];
	int B[10];
	int a = 0;
	int b = 0;
	int count = 0;
	char winner;

	for (int i = 0; i < 10; i++) {
		scanf_s("%d", &A[i]);
	}
	for (int i = 0; i < 10; i++) {
		scanf_s("%d", &B[i]);
	}

	for (int i = 0; i < 10; i++) {
		if (A[i] > B[i]) {
			a += 3;
			winner = 'A';
		}
		else if (A[i] < B[i]) {
			b += 3;
			winner = 'B';
		}
		else {
			a += 1;
			b += 1;
			count++;
		}
	}
	printf("%d %d\n", a, b);
	if (a > b)
		printf("A");
	else if (a < b)
		printf("B");
	else if (a == b && count == 10)
		printf("D");

	if (a == b && count != 10) {
		printf("%c", winner);
	}

	

	getchar();
	getchar();
	return 0;
}
