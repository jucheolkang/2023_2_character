#include <stdio.h>

int main(void)
{
	int all, temp;
	int b[9];

	temp = 0;

	scanf_s("%d", &all);

	for (int i = 0; i < 9; i++)
	{
		scanf_s("%d", &b[i]);
		temp += b[i];
	}

	printf("%d", all - temp);

	return 0;
}