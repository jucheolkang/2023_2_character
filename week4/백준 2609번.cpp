#include <stdio.h>

int main(void)
{
	int n1, n2;
	int gcd, lcm;

	gcd = 1;
	lcm = 0;

	scanf_s("%d %d", &n1, &n2);

	for (int i = 1; i <= n1 && i <= n2; ++i)
	{
		if (n1 % i == 0 && n2 % i == 0)
		{
			gcd = i;
		}
	}

	lcm = (n1 * n2) / gcd;

	printf("%d\n", gcd);
	printf("%d\n", lcm);

	return 0;
}