#include <stdio.h>

int main() {
    char name[50];
    char city[50];
    char university[50];
    char department[50];
    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);
    printf("Enter city: ");
    fgets(city, sizeof(city), stdin);
    printf("Enter university: ");
    fgets(university, sizeof(university), stdin);
    printf("Enter department: ");
    fgets(department, sizeof(department), stdin);

    puts("\n========================================");
    puts("            STUDENT PROFILE             ");
    puts("========================================");
    printf("Name       : %s", name);
    printf("City       : %s", city);
    printf("University : %s", university);
    printf("Department : %s", department);
    puts("========================================");

    return 0;
}
