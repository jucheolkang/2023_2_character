#include <stdio.h>
#include <malloc.h>

int* cardList(int n) {
	int* list = (int*)calloc(n, sizeof(int));
	return list;
}



int max_search2(int* CList, int n, int org) {
	if (n == 0)
		return 0;
	int max = 0, k = 1;
	for (int i = 1; i < n; i++) {
		if (i + 1 == org)
			continue;
		double j0 = (double)(CList[k - 1] / (double)k) * (double)(i + 1), j1 = (double)CList[i];
		if (j0 < j1) {
			k = i + 1;
		}
	}
	max = (int)CList[k - 1] * (n / k);
	return max + max_search2(CList, n % k, 0);
}

int max_search(int* CList, int n) {
	if (n == 0)
		return 0;
	int max1 = 0, max2 = 0, k = 1;
	for (int i = 1; i < n; i++) {
		double j0 = (double)(CList[k - 1] / (double)k) * (double)(i + 1), j1 = (double)CList[i];
		if (j0 < j1) {
			k = i + 1;
		}
	}
	max1 = (int)CList[k - 1] * (n / k);
	max1 += max_search(CList, n % k);
	max2 = max_search2(CList, n, k);
	return (max1 > max2) ? max1 : max2;
}

int main() {
	int a;
	int b, max = 0;
	while (1) {
		scanf(" %d", &a);
		if (a == 0)
			break;

		int* CList = cardList(a);
		for (int i = 0; i < a; i++) {
			scanf(" %d", &b);
			CList[i] = b;
		}

		max = max_search(CList, a);
		printf("%d\n", max);
	}
	return 0;
}