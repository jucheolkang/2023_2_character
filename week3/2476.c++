#include <iostream>
#include <stdio.h>
#include <algorithm>

using namespace std;

int main()
{
	int res = 0, n, a = 0,b = 0,c = 0,Max = 0;;
	cin >> n;
	for (int i = 0; i < n; i++)
	{

		cin >> a >> b >> c;
		if (a == b && b == c)
			res = 10000 + a * 1000;
		else if (a ==b &&b!=c)
			res = 1000 + b * 100;
		else if (a == c &&c!=b)
			res = 1000 + c * 100;
		else if (b == c && c != a)
			res = 1000 + c * 100;
		else
			res = max(max(a, b),c) * 100;
		if (Max < res)
		{
			Max = res;
		}
	}
	cout << Max;
	
	return 0;
}
