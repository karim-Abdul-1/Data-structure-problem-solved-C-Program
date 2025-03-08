// I/O your Name Initial. (Take input twice, and give output twice separately)
#include<stdio.h>
int main()
{
    char first_initial, last_initial;

    // First input
    printf("Enter your first initial: ");
    scanf(" %c",&first_initial);

    printf("Enter your last initial: ");
    scanf(" %c",&last_initial);

    printf("Your name initials are: %c%c\n", first_initial, last_initial);

    // Second input
    printf("Enter your first initial again: ");
    scanf(" %c", &first_initial);

    printf("Enter your last initial again: ");
    scanf(" %c", &last_initial);

    printf("Your name initials are: %c%c\n", first_initial, last_initial);

    return 0;

}
