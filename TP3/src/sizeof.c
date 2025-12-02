#include <stdio.h>

int main() {
    int a;
    int *p;
    int **pp;
    char *c;
    char **cp;
    char ***cpp;
    float *f;
    float **fp;
    float ***fpp;

    printf("La taille de int est : %zu octets\n", sizeof(a));
    printf("La taille de int* est : %zu octets\n", sizeof(p));
    printf("La taille de int** est : %zu octets\n", sizeof(pp));
    printf("La taille de char* est : %zu octets\n", sizeof(c));
    printf("La taille de char** est : %zu octets\n", sizeof(cp));
    printf("La taille de char*** est : %zu octets\n", sizeof(cpp));
    printf("La taille de float* est : %zu octets\n", sizeof(f));
    printf("La taille de float** est : %zu octets\n", sizeof(fp));
    printf("La taille de float*** est : %zu octets\n", sizeof(fpp));

    return 0;
}
