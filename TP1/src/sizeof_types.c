#include <stdio.h>

int main() {
    printf("Taille des types de base en C (en octets) :\n\n");

    printf("signed char       : %lu octet(s)\n", sizeof(signed char));
    printf("unsigned char     : %lu octet(s)\n\n", sizeof(unsigned char));

    printf("signed short      : %lu octet(s)\n", sizeof(signed short));
    printf("unsigned short    : %lu octet(s)\n\n", sizeof(unsigned short));

    printf("signed int        : %lu octet(s)\n", sizeof(signed int));
    printf("unsigned int      : %lu octet(s)\n\n", sizeof(unsigned int));

    printf("signed long int   : %lu octet(s)\n", sizeof(signed long int));
    printf("unsigned long int : %lu octet(s)\n\n", sizeof(unsigned long int));

    printf("signed long long int   : %lu octet(s)\n", sizeof(signed long long int));
    printf("unsigned long long int : %lu octet(s)\n\n", sizeof(unsigned long long int));

    printf("float             : %lu octet(s)\n", sizeof(float));
    printf("double            : %lu octet(s)\n", sizeof(double));
    printf("long double       : %lu octet(s)\n", sizeof(long double));

    return 0;
}

