// Input date in MM/DD/YYYY (12/01/2020)
// format and print in DD-MM-YYYY (01-12-2020) format.

#include <stdio.h>

int main() {
    int month, day, year;
    printf("Enter date in MM/DD/YYYY format: ");
    scanf("%d/%d/%d", &month, &day, &year);
    printf("Date in DD-MM-YYYY format: %02d-%02d-%04d", day, month, year);
    return 0;
}
