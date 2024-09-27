#include <stdio.h>
int main()
{
	int n, a, b, c, sum = 0, max = 0, Max = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d %d %d", &a, &b, &c);
		if (a == b && b == c && a == c) sum = 10000 + a * 1000;
		else if (a == b) sum = 1000 + a * 100;
		else if (b == c) sum = 1000 + b * 100;
		else if (a == c) sum = 1000 + a * 100;
		else
		{
			if (a > b && a > c) sum = a * 100;
			else if (b > a && b > c) sum = b * 100;
			else if (c > b && c > a) sum = c * 100;
		}
		if (sum > max) max = sum;
	}
	printf("%d", max);
	return 0;
}