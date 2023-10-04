#include<iostream>
#include<string>
using namespace std;

int main() {

	int a, b, c;
	while (1) {
		cin >> a >> b >> c;
		if (a == 0 && b == 0 && c == 0)
			break;
		if (a == b && a == c && b == c) {
			cout << "Equilateral" << '\n';
		}
		else if (a >= b + c || b >= a + c || c >= a + b) {
			cout << "Invalid" << '\n';
		}
		else if (a == b || a == c || b == c) {
			cout << "Isosceles" << '\n';
		}
		else if (a != b && b != c && a != c)
			cout << "Scalene" << '\n';
	}
	return 0;
}