// I/O your Nickname. (Take input twice, and give output twice separately)

#include <stdio.h>

int main() {
    char nickname[20];

    // First input
    printf("Enter your nickname: ");
    scanf("%s",&nickname);
    printf("Your nickname is: %s", nickname);

    // Second input
    printf("\nEnter your nickname again: ");
    scanf("%s",&nickname);
    printf("Your nickname is: %s \n", nickname);

    return 0;
}
