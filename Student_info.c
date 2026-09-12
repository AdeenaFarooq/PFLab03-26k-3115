#include <stdio.h>
int main(){
char name[50];
int rollNumber;
int age;
float height;
float gpa;
char section;
printf("Enter Student Name: ");
fgets(name, sizeof(name), stdin);
printf("Enter Roll Number: ");
scanf("%d", &rollNumber);

printf("Enter Age: ");
scanf("%d", &age);

printf("Enter Height (in feet): ");
scanf("%f", &height);

printf("Enter GPA: ");
scanf("%f", &gpa);

printf("Enter Section Character: ");
scanf(" %c", &section);

printf("\n========================================\n");
printf("         STUDENT INFORMATION            \n");
printf("========================================\n");
printf("Name     : %s", name);
printf("Roll No  : %d\n", rollNumber);
printf("Age      : %d\n", age);
printf("Height   : %.1f\n", height);
printf("GPA      : %.2f\n", gpa);
printf("Section  : %c\n", section);
printf("========================================\n");

return 0;
}
