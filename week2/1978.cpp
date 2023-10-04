#include<iostream>
using namespace std;


int main()
{
	int n, count = 0, count2 = 0;
	int* n2;
	cin >> n;
	n2 = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> n2[i];
	}

	for (int i = 0; i < n; i++)
	{
		count = 0;
		for (int j = 2; j <= n2[i]; j++)
		{
			if (n2[i] % j == 0)
			{
				count++;
			}
		}
		if (count == 1)
		{
			count2++;
		}
	}
	cout << count2;
	return 0;
}
