#include <stdio.h>

int main() {
    unsigned int nombre;  
    int i;
    printf("Entrez un nombre entier : ");
    scanf("%u", &nombre);
    printf("Représentation binaire de %u : ", nombre);
    for (i = 31; i >= 0; i--) {
        if (nombre & (1u << i))
            printf("1");
        else
            printf("0");
        if (i % 8 == 0)
            printf(" ");
    }
    printf("\n");
    return 0;
}


