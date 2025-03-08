//  Declare Pointer for primitive data types.//
#include <stdio.h>

#include <stdio.h>

int main() {
    int a = 42;
    int *ptr = &a;

    printf("The value of 'num' is: %d\n", a);
    printf("The value of 'ptr' is: %p\n", (void *) ptr); // casting to void pointer to print address
    printf("The value stored at the address pointed by pointer is: %d\n", *ptr);

    return 0;
}
