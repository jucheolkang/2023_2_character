#include <stdio.h>

int main(void)
{
	int stone;

	scanf_s("%d", &stone);

	if ((stone % 2) == 0)
	{
		printf("SK");
	}
	else
	{
		printf("CY");
	}

	return 0;
}