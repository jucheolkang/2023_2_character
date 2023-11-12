#include <stdio.h>

int main(void)
{
	int a, b, c, d;
    int p[3];
    int ans[3] = { 0,0,0 };

	scanf_s("%d %d %d %d", &a, &b, &c, &d);

    for (int i = 0; i < 3; i++)
    {
        scanf_s("%d", &p[i]);
    }

    for (int i = 0; i < 3; i++)
    {
        int dog1 = p[i] % (a + b);
        int dog2 = p[i] % (c + d);
        if (dog1 <= a && dog1 != 0) ans[i]++;
        if (dog2 <= c && dog2 != 0) ans[i]++;
    }

    for (int i = 0; i < 3; i++)
    {
        printf("%d \n", ans[i]);
    }

	return 0;
}