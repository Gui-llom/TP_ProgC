#include <stdio.h>

int main() {
    int n;
    int somme = 0;

    printf("Entrez un entier n : ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Erreur : n doit être positif.\n");
        return 1;
    }

    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            somme += i;
        }
    }

    if (somme == n)
        printf("%d est un nombre parfait.\n", n);
    else
        printf("%d n'est pas un nombre parfait.\n", n);

    return 0;
}
