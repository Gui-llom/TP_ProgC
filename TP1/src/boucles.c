#include <stdio.h>

int main() {
    int compteur = 5;
    int i = 1;

    if (compteur >= 10) {
        printf("Erreur : compteur doit être strictement inférieur à 10.\n");
        return 1;
    }
    while (i <= compteur) {
        int j = 1;
        while (j <= i) {
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
            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}

