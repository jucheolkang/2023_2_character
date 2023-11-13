// 2511번 / Bronze II / 카드 놀이 / 2023-11-13 / C언어

#include <stdio.h>

int main() {
    int A[10], B[10]; // 각각 입력 받을 10개의 A, B 카드 숫자
    int A_sum = 0, B_sum = 0; // A와 B 카드의 총합
    int index = 0; // 무승부인 경우를 세기 위해 
    
    // A와 B의 10개 라운드 카드 숫자 입력
    for (int i = 0; i < 10; i++) scanf("%d", &A[i]);
    for (int i = 0; i < 10; i++) scanf("%d", &B[i]);

    // 각 라운드마다 승점 부여
    for (int i = 0; i < 10; i++) {
        if (A[i] > B[i]) A_sum += 3;
        else if (A[i] < B[i]) B_sum += 3;
        else A_sum += 1, B_sum += 1;
    }

    // 게임 끝난 후, A와 B가 받은 총 승점 출력.
    printf("%d %d\n", A_sum, B_sum);
    
    if (A_sum == B_sum) {
        // 제일 마지막에 이긴 사람을 게임 승자로 정하기 위해 마지막 인덱스부터 접근.
        for (int i = 9; i >= 0; i--) {
            if (A[i] == B[i]) index++;
            if (index == 10) printf("D\n");
            if (A[i] > B[i]) {
                printf("A\n"); break;
            } else if (A[i] < B[i]) {
                printf("B\n"); break;
            }
        }
    } else if (A_sum > B_sum) printf("A\n");
    else if (A_sum < B_sum) printf("B\n");

    return 0;
}