#include<iostream>
using namespace std;


int main()
{
	char a[8][8];
	int n = 0;
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			cin >> a[i][j];
		}
	}

	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (i % 2 == j % 2 && a[i][j] == 'F')
			{
				n++;
			}
		}
	}
	cout << n;
	return 0;
}
