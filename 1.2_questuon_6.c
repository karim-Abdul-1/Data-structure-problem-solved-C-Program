// I/O your Full Name. (Take input twice, and give output twice separately)

#include <stdio.h>

int main() {
    char first_name[20], last_name[20];

    // First input
    printf("Enter your first name: ");
    scanf("%s", &first_name);

    printf("Enter your last name: ");
    scanf("%s", &last_name);

    printf("Your full name is: %s %s\n", first_name, last_name);

    // Second input
    printf("Enter your first name again: ");
    scanf("%s", &first_name);

    printf("Enter your last name again: ");
    scanf("%s", &last_name);

    printf("Your full name is: %s %s\n", first_name, last_name);

    return 0;
}
