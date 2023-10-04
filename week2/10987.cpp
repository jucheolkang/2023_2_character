#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;

int main()
{
	string str;
	int n = 0;
	cin >> str;

	for (int k = 0; k < str.length(); k++)
	{
		if (str.at(k) == 'a' || str.at(k) == 'e' || str.at(k) == 'i'
			|| str.at(k) == 'o' || str.at(k) == 'u')
		{
			n++;
		}
	}

	cout << n;

	return 0;
}