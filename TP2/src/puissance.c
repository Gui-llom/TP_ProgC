#include <stdio.h>

int main() {
    int a, b;
    int resultat = 1;

    printf("Entrez a : ");
    scanf("%d", &a);

    printf("Entrez b : ");
    scanf("%d", &b);

    if (b < 0) {
        printf("Erreur : b doit être positif.\n");
        return 1;
    }

    for (int i = 0; i < b; i++) {
        resultat *= a;
    }

    printf("%d^%d = %d\n", a, b, resultat);

    return 0;
}
