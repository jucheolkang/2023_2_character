#include <stdio.h>

int main(void)
{
	int n, m, j;
	int app, pos, tpos, mov, len;

	pos = 1;
	mov = 0;

	scanf_s("%d", &n);
	scanf_s("%d", &m);
	scanf_s("%d", &j);

	for (int i = 0; i < j; i++)
	{
		tpos = pos;
		len = pos + m - 1;

		scanf_s("%d", &app);

		if (tpos > app)
		{
			mov += tpos - app;
			pos = app;
		}
		else if (len < app)
		{
			mov += app - len;
			pos = app - m + 1;
		}
	}

	printf("%d\n", mov);

	return 0;
}