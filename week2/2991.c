// 2991번 : Bronze III : 사나운 개 : 2023-11-13 : C언어어

#include <stdio.h>

int main(void) {
    int a, b, c, d; // A분동안 공격적, B분동안 휴식, C분동안 공격적, B분동안 휴식
    int p, m, n; // 우체부, 우유배달원, 신문배달원의 도착 시간
    int p_dog, m_dog, n_dog; // 개 몇 마리에게 공격 받는지에 대한 변수
    scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &p, &m, &n);
    p_dog = ((0 < (p % (a + b)) && (p % (a + b)) <= a) ? 1 : 0) + ((0 < (p % (c + d)) && (p % (c + d)) <= c) ? 1 : 0);
    m_dog = ((0 < (m % (a + b)) && (m % (a + b)) <= a) ? 1 : 0) + ((0 < (m % (c + d)) && (m % (c + d)) <= c) ? 1 : 0);
    n_dog = ((0 < (n % (a + b)) && (n % (a + b)) <= a) ? 1 : 0) + ((0 < (n % (c + d)) && (n % (c + d)) <= c) ? 1 : 0);
    printf("%d\n%d\n%d\n", p_dog, m_dog, n_dog);
}