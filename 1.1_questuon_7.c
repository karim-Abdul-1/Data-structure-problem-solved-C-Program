/*Input one integer (decimal) number and print that number
in the decimal, octal, and hexadecimal number system.*/
#include<stdio.h>
int main()
{
    int a;
    printf("Enter an integer number : ");
    scanf("%d",&a);
    printf("Decimal number is :%d\n",a);
    printf("Octal Number is : %o\n",a);
    printf("Hexa decimal number is : %x\n",a);
    return 0;
}
