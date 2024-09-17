#include <stdio.h>

int main() {
    int count, price;
    scanf("%d", &count);
    for (int i = 0; i < 9; i++) {
        scanf("%d", &price);
        count -= price;
    }
    printf("%d\n", count);
}