#include <stdio.h>

int main(void)
{
	int n;

	while (1)
	{
		scanf_s("%d", &n);

		if (n == 0)
		{
			break;
		}

		int rev = 0;
		int temp = n;

		while (temp != 0)
		{
			rev = rev * 10 + (temp % 10);
			temp /= 10;
		}

		if (rev == n)
		{
			printf("yes\n");
		}
		else
		{
			printf("no\n");
		}
	}

	return 0;
}