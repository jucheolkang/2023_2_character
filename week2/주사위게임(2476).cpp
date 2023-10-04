#include<iostream>
using namespace std;

int main() {

	int n, a, b, c;
	int money;
	int max[1000] = { 0 };
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a >> b >> c;
		if (a == b && b == c && a == c) {
			money = 10000 + (a * 1000);
		}
		else if (a == b || a == c || b == c) {
			if (a == b || a == c)
				money = 1000 + (a * 100);
			else
				money = 1000 + (b * 100);
		}

		else {
			if (a > b && a > c) {
				money = a * 100;
			}
			else if (b > a && b > c) {
				money = b * 100;
			}
			else if (c > a && c > b) {
				money = c * 100;
			}
		}
		max[i] = money;
		money = 0;
	}
	int result = max[0];
	for (int k = 0; k < n; k++) {
		if (result < max[k]) {
			result = max[k];
		}

	}
	cout << result;
	return 0;
}