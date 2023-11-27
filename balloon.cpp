#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


string findSubstr(std::string const& str, int n) {
	if (str.length() < n) {
		return str;
	}

	return str.substr(0, n);
}
int main()
{
	string str, str2;
	while (true)
	{
		cin >> str;
		str2 = str;
		reverse(str.begin(), str.end());
		if (str == "0")
			break;
		if (str != str2)
		{
			printf("no\n");
		}
		else if (str == str2)
		{
			printf("yes\n");
		}
		
	}
}
/*std::string findSubstr(std::string const& str, int n) {
if (str.length() < n) {
	return str;
}

return str.substr(0, n);
}*/