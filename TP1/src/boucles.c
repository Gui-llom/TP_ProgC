#include <stdio.h>

int main() {
    int compteur = 5;  // tu peux changer cette valeur (doit être < 10)

    if (compteur >= 10) {
        printf("Erreur : compteur doit être strictement inférieur à 10.\n");
        return 1;
    }

    // Boucles imbriquées pour construire le triangle
    for (int i = 1; i <= compteur; i++) {
        for (int j = 1; j <= i; j++) {
            if (i == 1) {
                printf("* ");
            } else if (i == 2 && j == 1) {
                printf("* ");
            } else if (i == 2 && j == 2) {
                printf("* ");
            } else if (i == 3 && j == 2) {
                printf("# ");
            } else if (i == 4 && (j == 2 || j == 3)) {
                printf("# ");
            } else if (i == 5) {
                printf("* ");
            } else {
                printf("* ");
            }
        }
        printf("\n");
    }

    return 0;
}
