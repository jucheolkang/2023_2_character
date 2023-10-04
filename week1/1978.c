#include<stdio.h>
int main(void) {
	int a;
	int num;
	int cnt = 0;
	scanf("%d", &a);
	for (int j = 0; j < a; j++) {
		scanf("%d", &num);
		for (int i = 2; i <= num; i++) {
			if (num == i) cnt++;
			else if (num % i == 0) break;
		}

	}
	printf("%d", cnt);
	return 0;
}