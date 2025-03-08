/* Input current time in HH:MM:SS (1:5:30)
format and print in HH.MM.SS (01.05.30) format. */

#include<stdio.h>

int main() {
    int hour, minute, second;
    printf("Enter the hour :");
    scanf("%d",&hour);

    printf("Enter the minute :");
    scanf("%d",&minute);

    printf("Enter the second :");
    scanf("%d",&second);

    printf("hour : minute : second : %02d.%02d.%02d", hour, minute, second);
    return 0;
}
