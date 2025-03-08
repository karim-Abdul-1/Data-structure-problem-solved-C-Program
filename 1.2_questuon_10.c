/* Input one integer number (decimal/octal/hexadecimal) and print that
 number in the decimal, octal, and hexadecimal number system.*/

 #include<stdio.h>
 int main()
 {
     int a;
     printf("Enter an integer number : ");
     scanf("%d",&a);
     printf("this number Decimal format is : %d\n",a);
     printf("this number Octal format is : %o\n",a);
     printf("this number Hexadecimal format is : %x\n",a);


     return 0;
 }
