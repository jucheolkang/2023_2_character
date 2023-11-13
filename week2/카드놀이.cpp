#include <stdio.h>

int main() {
	int A[10], B[10], Acount = 0, Bcount = 0;
	char win = 'D';
	for (int i = 0; i < 10; i++)
		scanf_s(" %d", &A[i]);
	for (int i = 0; i < 10; i++)
		scanf_s(" %d", &B[i]);

	for (int i = 0; i < 10; i++) {
		if (A[i] == B[i]) {
			Acount++;
			Bcount++;
			continue;
		}
		if (A[i] > B[i]) {
			Acount += 3;
			win = 'A';
		}
		else {
			Bcount += 3;
			win = 'B';
		}
	}
	if (Acount > Bcount)
		win = 'A';
	else if (Acount < Bcount)
		win = 'B';

	printf("%d %d\n%c", Acount, Bcount, win);

}