#include <stdio.h>
#include <string.h>

int main() {
    char word[100];
    int count = 0;
    scanf("%s", word);
    for (int i = 0; i < strlen(word); i++) {
        switch(word[i]) {
        case 'a': // count++; break;
        case 'e': // count++; break;
        case 'i': // count++; break;
        case 'o': // count++; break;
        case 'u': // count++; break;
            count++;
        }
    }
    printf("%d\n", count);
}