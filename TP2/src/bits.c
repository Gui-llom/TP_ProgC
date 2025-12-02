#include <stdio.h>

int main() {
    int d = 0x10001000;  


    int bit4gauche  = (d >> 28) & 1;
    int bit20gauche = (d >> 12) & 1;

    if (bit4gauche == 1 && bit20gauche == 1)
        printf("1\n");
    else
        printf("0\n");

    return 0;
}
