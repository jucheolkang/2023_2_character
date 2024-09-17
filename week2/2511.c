#include <stdio.h>

int main() {
    int A[11], B[11], A_count = 0, B_count = 0, draw_count = 0;
    for (int i = 0; i < 10; i++)
        scanf("%d", &A[i]);
    for (int i = 0; i < 10; i++) 
        scanf("%d", &B[i]);
    for (int i = 0; i < 10; i++) {
        if (A[i] == B[i]) A_count++, B_count++;
        else if (A[i] > B[i]) A_count += 3;
        else if (A[i] < B[i]) B_count += 3;
    }
    printf("%d %d\n", A_count, B_count);
    if (A_count == B_count) { 
        for (int i = 9; i >= 0; i--) {
            if (A[i] == B[i]) {
                draw_count++;
            }
            if (draw_count == 10) printf("D\n");
            if (A[i] > B[i]) {
                printf("A\n"); 
                break;
            }
            else if (A[i] < B[i]) {
                printf("B\n"); 
                break;
            }
        }
    }
    else if (A_count > B_count) printf("A\n");
    else if (A_count < B_count) printf("B\n");
}