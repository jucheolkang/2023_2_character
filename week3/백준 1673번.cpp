#include <stdio.h>

int main(void)
{
	int n, k, r, sum;

	while (scanf_s("%d %d", &n, &k) != EOF)
	{
		if (k > 1 && k <= n && n <= 1000000000)
		{
			sum = n;

			while (n >= k)
			{
				r = n % k;
				n /= k;
				sum += n;
				n += r;
			}

			n, r, k = 0;

			printf("%d\n", sum);
		}
	}

	return 0;

}