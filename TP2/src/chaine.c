#include <stdio.h>

int main() {
    int a, b;

    printf("Entrez deux entiers a et b : ");
    scanf("%d", &a);
    scanf("%d", &b);

    int x = a, y = b;
    while (y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }

    printf("PGCD(%d, %d) = %d\n", a, b, x);
    return 0;
}
