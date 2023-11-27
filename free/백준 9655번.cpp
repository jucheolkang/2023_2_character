#include <stdio.h>

int main(void)
{
	int stone;

	scanf_s("%d", &stone);

	if ((stone % 2) == 0)
	{
		printf("CY");
	}
	else
	{
		printf("SK");
	}

	return 0;
}