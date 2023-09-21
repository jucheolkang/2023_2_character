#include <stdio.h>

int main() {
    int a, b, c;
    while(1) {
        scanf("%d %d %d", &a, &b, &c);
        if (a == 0 && b == 0 && c == 0) break;
        if (a == b && b == c) printf("Equilateral\n");
        else if (a == b && b != c) printf("Isosceles\n");
        else if (b == c && c != a) printf("Isosceles\n");
        else if (c == a && a != b) printf("Isosceles\n");
        else {
            if (a < b && b < c && (a + b) <= c) printf("Invalid\n");
            else if (b < c && c < a && (b + c) <= a) printf("Invalid\n");
            else if (c < a && a < b && (c + a) <= b) printf("Invalid\n");
            else if (b < a && a < c && (b + a) <= c) printf("Invalid\n");
            else if (c < b && b < a && (c + b) <= a) printf("Invalid\n");
            else if (a < c && c < b && (a + c) <= b) printf("Invalid\n");
            else printf("Scalene\n");
        }
    }
}