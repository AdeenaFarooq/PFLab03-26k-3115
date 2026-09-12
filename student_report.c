#include <stdio.h>

int main() {
    
    char name[50];
    char section;
    int rollNumber;
    int age;
    float cgpa;
    double height;

    
    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter roll number: ");
    scanf("%d", &rollNumber);

    printf("Enter section: ");
    scanf(" %c", &section);

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter CGPA: ");
    scanf("%f", &cgpa);

    printf("Enter height: ");
    scanf("%lf", &height);

    
    puts("\n========================================");
    puts("            STUDENT REPORT              ");
    puts("========================================");
    printf("Field\t\tValue\n");
    puts("----------------------------------------");

    printf("Name\t\t: %s", name); 
    printf("Roll Number\t: %d\n", rollNumber);
    printf("Section\t\t: %c\n", section);
    printf("Age\t\t: %d\n", age);
    printf("CGPA\t\t: %.2f\n", cgpa);   
    printf("Height\t\t: %.2lf\n", height);

    puts("----------------------------------------");

    return 0;
}
