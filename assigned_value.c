// Assign and Access data using the pointer

#include <stdio.h>

int main() {
    int num = 42;
    int *ptr = &num; // assign the address of 'num' to 'ptr'

    printf("The value of 'num' is: %d\n", num);
    printf("The value of 'ptr' is: %p\n", (void *) ptr);
    printf("The value stored at the address pointed by 'ptr' is: %d\n", *ptr);

    // change the value of 'num' through the pointer
    *ptr = 100;

    printf("The new value of 'num' is: %d\n", num);

    return 0;
}
