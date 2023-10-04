#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
	int a, b, c;

	for (;;)
	{
		cin >> a >> b >> c;
		if (a < b + c || b < c + a || c < a + b)
		{
			if (a == b && b == c && c == a)
			{
				cout << "Equilateral" << "\n";
			}
			else if (a >= b + c || b >= c + a || c >= a + b)
			{
				cout << "Invalid" << "\n";
			}
			else if (a == b || b == c || c == a)
			{
				cout << "Isosceles" << "\n";
			}
			else
			{
				cout << "Scalene" << "\n";
			}
		}
		else if (a == 0 && b == 0 && c == 0)
		{
			break;
		}
	}
	return 0;
}