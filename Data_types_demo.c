#include <stdio.h>

int main() {
    int decimalInt;
    unsigned int unsignedInt;
    float floatNum;
    double doubleNum;
    char charVal;
    long int longInt;

    // Reading inputs from user
    printf("Enter a signed integer: ");
    scanf("%d", &decimalInt);

    printf("Enter an unsigned integer: ");
    scanf("%u", &unsignedInt);

    printf("Enter a float value: ");
    scanf("%f", &floatNum);

    printf("Enter a double value: ");
    scanf("%lf", &doubleNum);

    printf("Enter a character: ");
    scanf(" %c", &charVal);

    printf("Enter a long integer: ");
    scanf("%ld", &longInt);

    printf("\n========================================\n");
    printf("        DATA TYPES AND FORMAT DEMO       \n");
    printf("========================================\n");

    // Integer representations
    printf("\n--- Integer Representations ---\n");
    printf("Decimal             : %d\n", decimalInt);
    printf("Octal               : %o\n", decimalInt);
    printf("Hexadecimal (lower) : %x\n", decimalInt);
    printf("Hexadecimal (upper) : %X\n", decimalInt);

    
    printf("\n--- Other Data Types ---\n");
    printf("Unsigned Integer    : %u\n", unsignedInt);
    printf("Character           : %c\n", charVal);
    printf("Long Integer        : %ld\n", longInt);

   
    printf("\n--- Float Specifiers ---\n");
    printf("Standard (%%f)       : %f\n", floatNum);
    printf("Exponential (%%e)    : %e\n", floatNum);
    printf("Compact (%%g)        : %g\n", floatNum);

    
    printf("\n--- Double Specifiers ---\n");
    printf("Standard (%%f)       : %f\n", doubleNum);
    printf("Exponential (%%e)    : %e\n", doubleNum);
    printf("Compact (%%g)        : %g\n", doubleNum);

    printf("========================================\n");

    return 0;
}
