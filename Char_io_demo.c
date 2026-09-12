#include <stdio.h>

int main() {
    char ch1, ch2, ch3;
    printf("Enter first character: ");
    ch1 = getchar();
    getchar(); 
    
    printf("Enter second character: ");
    ch2 = getchar();
    getchar(); 
    printf("Enter third character: ");
    ch3 = getchar();
    printf("\n--------------------------------\n");
    printf("Characters Entered:\n");
    printf("Character 1 : ");
    putchar(ch1);
    putchar('\n');
    printf("Character 2 : ");
    putchar(ch2);
    putchar('\n');
    printf("Character 3 : ");
    putchar(ch3);
    putchar('\n');

    printf("--------------------------------\n");

    return 0;
}
