#include <stdio.h>
int main() {
	int a[10], b[10], A = 0, B = 0, i;
	char w = 'D';
	for (i = 0; i < 10; i++)
	{
		scanf_s("%d", &a[i]);
	}
	for (i = 0; i < 10; i++)
	{
		scanf_s("%d", &b[i]);
	}
	for (i = 0; i < 10; i++)
	{
		if (a[i] > b[i])
		{
			A += 3;
			w = 'A';
		}
		else if (a[i] < b[i])
		{
			B += 3;
			w = 'B';
		}
		else
		{
			A++;
			B++;
		}
	}
	printf("%d %d\n", A, B);
	
	if (A > B) printf("A");
	else if (A < B) printf("B");
	else printf("%c", w);
}
