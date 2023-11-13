#include <stdio.h>

int main(void) {
	int dice[3];
	int price = 0;
	for (int i = 0; i < 3; i++) {
		scanf_s("%d", &dice[i]);
	}

	if (dice[0] == dice[1] && dice[1] == dice[2] && dice[0] == dice[2]) {
		price = 10000 + dice[0] * 1000;
	}
	else if (dice[0] == dice[1] && dice[0] != dice[2] ) {
		price = 1000 + dice[0] * 100;
	}
	else if (dice[1] == dice[2] && dice[0] != dice[2]) {
		price = 1000 + dice[1] * 100;
	}
	else if (dice[0] == dice[2] && dice[0] != dice[1]) {
		price = 1000 + dice[0] * 100;
	}
	else if (dice[0] != dice[1] && dice[1] != dice[2] && dice[0] != dice[2]) {
		if (dice[0] > dice[1] && dice[0] > dice[2]) {
			price = dice[0] * 100;
		}
		else if (dice[1] > dice[0] && dice[1] > dice[2]) {
			price = dice[1] * 100;
		}
		else if (dice[2] > dice[0] && dice[2] > dice[1]) {
			price = dice[2] * 100;
		}
	}

	printf("%d", price);


	getchar();
	getchar();

	return 0;


}
