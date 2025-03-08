/* I/O your Full Name, Your age, Your CGPA print as follows:
Hello, [your Full Name]
Your age is [your age]
Your CGPA is [your CGPA] */

#include <stdio.h>

int main() {
    char full_name[50];
    int age;
    float cgpa;

    // Input
    printf("Enter your full name: ");
    scanf("%s",& full_name);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your CGPA: ");
    scanf("%f", &cgpa);

    // Output
    printf("Hello, %s", full_name);
    printf("Your age is %d\n", age);
    printf("Your CGPA is %.2f\n", cgpa);

    return 0;
}
