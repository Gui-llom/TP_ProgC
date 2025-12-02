#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int tab[100], n;
    int present = 0;

    srand(time(NULL));


    for(int i = 0; i < 100; i++)
        tab[i] = rand() % 200 - 100; 


    printf("Tableau :\n");
    for(int i = 0; i < 100; i++)
        printf("%d ", tab[i]);
    printf("\n");


    printf("Entrez l'entier que vous souhaitez chercher : ");
    scanf("%d", &n);

    for(int i = 0; i < 100; i++) {
        if(tab[i] == n) {
            present = 1;
            break;
        }
    }

    if(present)
        printf("Résultat : entier présent\n");
    else
        printf("Résultat : entier absent\n");

    return 0;
}
