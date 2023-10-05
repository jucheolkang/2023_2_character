#include <iostream>
#include <stdio.h>
#include <algorithm>

using namespace std;

int main()
{
	int a, b, c;
	while (true)
	{
		cin >> a >> b >> c;
		if (a == 0 && b == 0 && c == 0)
			break;
		if (a == b && b == c)
		{
			cout << "Equilateral\n";
		}
		else if (a == b || b == c || a == c)
		{
			if (a >= b + c || b >= a + c || c >= a + b)
			{
				cout << "Invalid\n";
			}
			else 
				cout << "Isosceles\n";
		}
		else if (a != b && b != c && a != c)
		{
			if (a >= b + c || b >= a + c || c >= a + b)
			{
				cout << "Invalid\n";
			}
			else
				cout << "Scalene\n";
		}

	}
	return 0;
}
