// Print variable value and address using the pointer.//

#include <stdio.h>

int main() {
    int num = 42;
    int *ptr = &num;

    printf("The value of 'num' is: %d\n", num);
    printf("The address of 'num' is: %p\n", (void *) &num);
    printf("The value of 'ptr' is: %p\n", (void *) ptr);
    printf("The value stored at the address pointed by 'ptr' is: %d\n", *ptr);

    return 0;
}


