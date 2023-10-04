#include <stdio.h>

int main() {
    int out[4], in[4], count = 0, max = 0;
    for (int i = 0; i < 4; i++) {
        scanf("%d %d", &out[i], &in[i]);
        count = count - out[i] + in[i];
        if (max < count) max = count;
    }
    printf("%d\n", max);
}