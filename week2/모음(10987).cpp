#include<iostream>
#include <string.h>
using namespace std;

int main() {

	char n[100];
	int count = 0;
	cin >> n;
	for (int i = 0; i < strlen(n); i++) {
		if (n[i] == 97 || n[i] == 101 || n[i] == 105 || n[i] == 111 || n[i] == 117)
			count++;
	}
	cout << count;




	return 0;
}