#include <stdio.h>

int gdc(int a, int b) { // 최대공약수를 반환하는 함수
    int i, j, temp; // 공약수를 저장할 변수

    j = (a < b) ? a : b; // 둘 중 작은 수를 구함

    for (i = 1; i <= j; i++) {
        if (a % i == 0 && b % i == 0)
            temp = i;
    }
    return temp;
}

int lcm(int a, int b) { // 최소공배수를 반환하는 함수
    int i, j, temp; // 공배수를 저장할 변수

    j = (a > b) ? a : b; // 둘 중 큰 수를 구함

    for (i = j; ; i++) {
        if (i % a == 0 && i % b == 0) {
            temp = i;
            break;
        }
    }
    return temp;
}

int main() {
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    printf("%d\n%d\n", gdc(num1, num2), lcm(num1, num2));
    return 0;
}