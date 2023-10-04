#include <stdio.h>

int main()
{
	char chess[8][8];
	int cnt = 0;

	for (int i = 0; i < 8; i++)
	{
			scanf_s("%s", &chess[i]);
	}

	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (i == 0 || i % 2 == 0)
			{
				if (j == 0 || j % 2 == 0)
				{
					if (chess[i][j] == 'F')
						cnt++;
				}
			}
		}
	}
}