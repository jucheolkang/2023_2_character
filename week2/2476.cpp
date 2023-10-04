#include<iostream>
using namespace std;


int main()
{
	int n, n1, n2, n3, money = 0, money1 = 0;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> n1 >> n2 >> n3;
		if (n1 == n2 && n2 == n3 && n3 == n1)
		{
			money = 10000 + (n1 * 1000);
		}
		else if (n1 == n2 || n2 == n3 || n3 == n1)
		{
			if (n1 != n2)
			{
				money = 1000 + (n3 * 100);
			}
			else if (n2 != n3)
			{
				money = 1000 + (n1 * 100);
			}
			else
			{
				money = 1000 + (n2 * 100);
			}
		}
		else if (n1 != n2 && n2 != n3 && n3 != n1)
		{
			if (n1 > n2 && n1 > n3)
			{
				money = n1 * 100;
			}
			else if (n2 > n1 && n2 > n3)
			{
				money = n2 * 100;
			}
			else if (n3 > n1 && n3 > n2)
			{
				money = n3 * 100;
			}
		}
		if (money > money1)
		{
			money1 = money;
		}
	}
	cout << money1;

	return 0;
}
