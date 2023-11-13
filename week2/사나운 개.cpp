#include <stdio.h>

int main() {
	int dog[4], time[3], attack;
	for (int i = 0; i < 4; i++)
		scanf_s(" %d", &dog[i]);
	for (int i = 0; i < 3; i++)
		scanf_s(" %d", &time[i]);

	for (int i = 0; i < 3; i++) {
		attack = 0;
		if (time[i] % (dog[0] + dog[1]) <= dog[0] && time[i] % (dog[0] + dog[1]) != 0)
			attack++;
		if (time[i] % (dog[2] + dog[3]) <= dog[2] && time[i] % (dog[2] + dog[3]) != 0)
			attack++;
		printf("%d\n", attack);
	}
}