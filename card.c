#include <stdio.h>

int main()
{

	int A = 0;
	int B = 0;
	int a1, a2, a3, a4, a5, a6, a7, a8, a9, a10;
	int b1, b2, b3, b4, b5, b6, b7, b8, b9, b10;

	scanf_s("%d %d %d %d %d %d %d %d %d %d", &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10);
	scanf_s("%d %d %d %d %d %d %d %d %d %d", &b1, &b2, &b3, &b4, &b5, &b6, &b7, &b8, &b9, &b10);

	if (a1 > b1)
		A = A + 3;
	else if (a1 < b1)
		B = B + 3;
	else if (a1 == b1)
		A = A + 1, B = B + 1;

	if (a2 > b2)
		A = A + 3;
	else if (a2 < b2)
		B = B + 3;
	else if (a2 == b2)
		A = A + 1, B = B + 1;

	if (a3 > b3)
		A = A + 3;
	else if (a3 < b3)
		B = B + 3;
	else if (a3 == b3)
		A = A + 1, B = B + 1;

	if (a4 > b4)
		A = A + 3;
	else if (a4 < b4)
		B = B + 3;
	else if (a4 == b4)
		A = A + 1, B = B + 1;

	if (a5 > b5)
		A = A + 3;
	else if (a5 < b5)
		B = B + 3;
	else if (a5 == b5)
		A = A + 1, B = B + 1;

	if (a6 > b6)
		A = A + 3;
	else if (a6 < b6)
		B = B + 3;
	else if (a6 == b6)
		A = A + 1, B = B + 1;

	if (a7 > b7)
		A = A + 3;
	else if (a7 < b7)
		B = B + 3;
	else if (a7 == b7)
		A = A + 1, B = B + 1;

	if (a8 > b8)
		A = A + 3;		
	else if (a8 < b8)
		B = B + 3;
	else if (a8 == b8)
		A = A + 1, B = B + 1;

	if (a9 > b9)
		A = A + 3;
	else if (a9 < b9)
		B = B + 3;
	else if (a9 == b9)
		A = A + 1, B = B + 1;

	if (a10 > b10)
		A = A + 3;
	else if (a10 < b10)
		B = B + 3;
	else if(a10 == b10)
		A = A + 1, B = B + 1;

	printf("%d %d\n", A, B);

	if (A > B)
		printf("A");
	else if (A < B)
		printf("B");
	else if (A == B) {
		if (a10 > b10)
			printf("A");
		else if (a10 < b10)
			printf("B");
		else if (a10 == b10) {
			if (a9 > b9)
				printf("A");
			else if (a9 < b9)
				printf("B");
			else if (a9 == b9) {
				if (a8 > b8)
					printf("A");
				else if (a8 < b8)
					printf("B");
				else if (a8 == b8) {
					if (a7 > b7)
						printf("A");
					else if (a7 < b7)
						printf("B");
					else if (a7 == b7) {
						if (a6 > b6)
							printf("A");
						else if (a6 < b6)
							printf("B");
						else if (a6 == b6) {
							if (a5 > b5)
								printf("A");
							else if (a5 < b5)
								printf("B");
							else if (a5 == b5) {
								if (a4 > b4) 
									printf("A"); 
								else if (a4 < b4) 
									printf("B"); 
								else if (a4 == b4) {
									if (a3 > b3) 
										printf("A");
									else if (a3 < b3)
										printf("B") ;
									else if (a3 == b3) {
										if (a2 > b2) 
											printf("A"); 
										else if (a2 < b2) 
											printf("B"); 
										else if (a2 == b2) {
											if (a1 > b1)
												printf("A"); 
											else if (a1 < b1) 
												printf("B"); 
											else if (a1 == b1) {
												printf("D");
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}


	return 0;
}