#include <stdio.h>

int main() {
    int n;
    int resultat = 1;

    printf("Entrez un entier n : ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Erreur : n doit être positif.\n");
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        resultat *= i;
    }

    printf("%d! = %d\n", n, resultat);

    return 0;
}
