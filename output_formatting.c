#include <stdio.h>

int main() {
    char name[50];
    int rollNo;
    char section;
    float floatVal;

    printf("Enter student name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter roll number: ");
    scanf("%d", &rollNo);

    printf("Enter section: ");
    scanf(" %c", &section);

    printf("Enter a floating-point value: ");
    scanf("%f", &floatVal);

    
    puts("\n=============================================");
    puts("          PROGRAMMING FUNDAMENTALS           ");
    puts("=============================================");

    printf("Name            : %s", name);
    printf("Roll No         : %d\n", rollNo);
    printf("Section         : %c\n", section);

    puts("C Topics:");
    puts("  1. Variables");
    puts("  2. Data Types");
    puts("  3. Input/Output");
    puts("  4. Format Specifiers");
    puts("  5. Escape Sequences");

   
    puts("Sample Character: 'A'");
    puts("Sample Question : \"What is C?\"");

    
    puts("Floating Value:");
    printf("  Default       : %f\n", floatVal);
    printf("  2-digit       : %.2f\n", floatVal);
    printf("  4-digit       : %.4f\n", floatVal);

    puts("=============================================");

    return 0;
}
