#include <stdio.h>

int main(void)
{
	int a[10], b[10];
	int aw, bw, w;

	aw = 0;
	bw = 0;
	w = 0;

	for (int i = 0; i < 10; i++)
	{
		scanf_s("%d", &a[i]);
	}

	for (int i = 0; i < 10; i++)
	{
		scanf_s("%d", &b[i]);
	}

	for (int i = 0; i < 10; i++)
	{
		if (a[i] > b[i])
		{
			aw += 3;
			w = 1;
		}
		else if (a[i] < b[i])
		{
			bw += 3;
			w = 2;
		}
		else
		{
			aw += 1;
			bw += 1;
		}
	}

	printf("%d ", aw);
	printf("%d ", bw);
	printf("\n");

	if(aw == bw)
	{
		if (w == 1)
		{
			printf("A");
		}
		else if(w == 2)
		{
			printf("B");
		}
		else
		{
			printf("D");
		}
	}
	else if (aw > bw)
	{
		printf("A");
	}
	else
	{
		printf("B");
	}

	return 0;
}