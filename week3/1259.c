#include <stdio.h>
#include <string.h>

int main(){
    char num[6];

    while (1) {
        scanf("%s", num);
        if (num[0] == '0') break;
        int len = strlen(num), palin = 1;
        for (int i = 0; i < len/2; i++)
            if (num[i] != num[len - 1 - i]) {
                palin = 0;
                break;
            }
        printf("%s\n", palin ? "yes" : "no");
    }
}