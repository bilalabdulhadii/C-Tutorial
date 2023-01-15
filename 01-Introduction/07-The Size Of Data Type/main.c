#include <stdio.h>

int main() {
    // sizeof() to find the size of a variable
    printf("short int     : %2d bytes\n", sizeof(short int));
	printf("int           : %2d bytes\n", sizeof(int));
	printf("long int      : %2d bytes\n", sizeof(long int));
	printf("signed int    : %2d bytes\n", sizeof(signed int));
	printf("unsigned int  : %2d bytes\n", sizeof(unsigned int));
	printf("\n");
	printf("float         : %2d bytes\n", sizeof(float));
	printf("double        : %2d bytes\n", sizeof(double));
	printf("long double   : %2d bytes\n", sizeof(long double));
	printf("\n");
	printf("signed char   : %2d bytes\n", sizeof(signed char));
	printf("char          : %2d bytes\n", sizeof(char));
	printf("unsigned char : %2d bytes\n", sizeof(unsigned char));
    return 0;
}
