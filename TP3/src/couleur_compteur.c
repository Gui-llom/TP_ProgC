#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct {
    unsigned char r, g, b, a;
} Couleur;

typedef struct {
    Couleur couleur;
    int compteur;
} CouleurDistincte;

int main() {
    Couleur tab[100];
    CouleurDistincte distinct[100];
    int nbDistinct = 0;

    srand(time(NULL));


    for(int i = 0; i < 100; i++) {
        tab[i].r = rand() % 256;
        tab[i].g = rand() % 256;
        tab[i].b = rand() % 256;
        tab[i].a = rand() % 256;
    }


    for(int i = 0; i < 100; i++) {
        int trouvé = 0;
        for(int j = 0; j < nbDistinct; j++) {
            if(tab[i].r == distinct[j].couleur.r &&
               tab[i].g == distinct[j].couleur.g &&
               tab[i].b == distinct[j].couleur.b &&
               tab[i].a == distinct[j].couleur.a) {
                   distinct[j].compteur++;
                   trouvé = 1;
                   break;
               }
        }
        if(!trouvé) {
            distinct[nbDistinct].couleur = tab[i];
            distinct[nbDistinct].compteur = 1;
            nbDistinct++;
        }
    }


    for(int i = 0; i < nbDistinct; i++) {
        printf("%02x %02x %02x %02x : %d\n",
               distinct[i].couleur.r,
               distinct[i].couleur.g,
               distinct[i].couleur.b,
               distinct[i].couleur.a,
               distinct[i].compteur);
    }

    return 0;
}
