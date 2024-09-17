#include <stdio.h>

int main() {
    int n, count[26] = { 0 }, count_num = 0;
    char name[31];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s", name);
        count[name[0] - 97]++;
    }
    for (int j = 0; j < 26; j++) {
        if(count[j] >= 5) count_num++, printf("%c", j + 97);
    }
    if (count_num == 0) printf("PREDAJA\n");
}