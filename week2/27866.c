#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	char a[1000] = { 0, };
	int b;
	scanf("%s", &a);
	scanf("%d", &b);
	printf("%c", a[b - 1]);

	return 0;

}