#include <stdio.h>
#include <string.h>

int main() {
    char word[100];
    int count = 0;
    scanf("%s", word);
    for (int i = 0; i < strlen(word); i++) {
        switch(word[i]) {
        case 'a': 
        case 'e': 
        case 'i': 
        case 'o': 
        case 'u': 
            count++;
        }
    }
    printf("%d\n", count);
}