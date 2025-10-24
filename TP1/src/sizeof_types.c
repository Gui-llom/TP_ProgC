#include <stdio.h>

int main() {
    printf("Taille des types de base en C (en octets) :\n\n");

    // Types char
    printf("signed char       : %lu octet(s)\n", sizeof(signed char));
    printf("unsigned char     : %lu octet(s)\n\n", sizeof(unsigned char));

    // Types short
    printf("signed short      : %lu octet(s)\n", sizeof(signed short));
    printf("unsigned short    : %lu octet(s)\n\n", sizeof(unsigned short));

    // Types int
    printf("signed int        : %lu octet(s)\n", sizeof(signed int));
    printf("unsigned int      : %lu octet(s)\n\n", sizeof(unsigned int));

    // Types long int
    printf("signed long int   : %lu octet(s)\n", sizeof(signed long int));
    printf("unsigned long int : %lu octet(s)\n\n", sizeof(unsigned long int));

    // Types long long int
    printf("signed long long int   : %lu octet(s)\n", sizeof(signed long long int));
    printf("unsigned long long int : %lu octet(s)\n\n", sizeof(unsigned long long int));

    // Types à virgule flottante
    printf("float             : %lu octet(s)\n", sizeof(float));
    printf("double            : %lu octet(s)\n", sizeof(double));
    printf("long double       : %lu octet(s)\n", sizeof(long double));

    return 0;
}
