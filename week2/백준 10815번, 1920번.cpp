#include <stdio.h>
#include <stdlib.h>

int a[500000];
int b[500000];

int compare(const void* a, const void* b) {
	int num1 = *(int*)a;
	int num2 = *(int*)b;

	if (num1 < num2) return -1;
	if (num1 > num2) return 1;
	return 0;
}


int find(int num, int start, int end)
{
	if (end < start)
		return 0;

	int middle = (start + end) / 2;
	if (num == a[middle])
		return 1;

	else if (num < a[middle])
		find(num, start, middle - 1);

	else
		find(num, middle + 1, end);
}

int main(void)
{
	int n, m;

	scanf_s("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &a[i]);
	}

	qsort(a, n, sizeof(int), compare);

	scanf_s("%d", &m);
	for (int i = 0; i < m; i++)
	{
		scanf_s("%d", &b[i]);
	}

	for (int i = 0; i < m; i++)
	{
		printf("%d\n", find(b[i], 0, n - 1));
	}

	return 0;
}
