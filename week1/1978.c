#include <stdio.h>

int main() {
    int n, num, count = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        for (int j = 2; j <= num; j++) {
            if (num == j) count++;
            if (num % j == 0) break;
        }
    }
    printf("%d\n", count);
}
/*
한번에 num 값을 입력받아서 처리하는 게 배열을 쓰는 것보다
더 나은 방법이다.
*/