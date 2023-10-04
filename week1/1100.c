#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	char c[9][9] = {0, };
	int cnt = 0;
	for (int i = 0; i < 8; i++) {
			scanf("%s", &c[i]);
	}
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (i == 0 || i % 2 == 0) {
				if (j % 2 == 0 || j == 0) {
					if (c[i][j] == 'F') {
						cnt++;
					}
				}
			}
			else {
				if (j % 2 == 1) {
					if (c[i][j] == 'F') {
						cnt++;
					}
				}
			}

		}
	}
	printf("%d", cnt);
	return 0;
}
