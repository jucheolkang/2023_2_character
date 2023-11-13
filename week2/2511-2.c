#include <stdio.h>

int main() {
    int A[10], B[10];
    int A_sum = 0, B_sum = 0, index = 0;
    for (int i = 0; i < 10; i++) {
        scanf("%d", &A[i]);
    }
    for (int i = 0; i < 10; i++) {
        scanf("%d", &B[i]);
    }
    for (int i = 0; i < 10; i++) {
        if (A[i] > B[i]) A_sum += 3;
        else if (A[i] < B[i]) B_sum += 3;
        else A_sum += 1, B_sum += 1;
    }
    printf("%d %d\n", A_sum, B_sum);
    if (A_sum == B_sum) {
        for (int i = 9; i >= 0; i--) {
            if (A[i] == B[i]) index++;
            if (index == 10) printf("D\n");
            if (A[i] > B[i]) {
                printf("A\n"); break;
            } else if (A[i] < B[i]) {
                printf("B\n"); break;
            }
        }
    }
    else if (A_sum > B_sum) printf("A\n");
    else if (A_sum < B_sum) printf("B\n");

    return 0;
}