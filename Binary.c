// Binary //
#include<stdio.h>
int main()
{
    int A[50], n, s, i;

    printf("Enter an array element : ");
    scanf("%d",&n);

    printf("\n Enter the array numbers : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&A[i]);
    }

    printf("The number is : ");
    for(i=0; i<n; i++)
    {
        printf("\n The number with Index is A[%d]:%d",i,A[i]);
    }
    printf("\n Enter the search value : ");
    scanf("%d",&s);
    int low=0, high=n, mid;

    while(low <= high){
        mid = low + high /2;
        if(A[mid] > s){
            high = mid -1;
        }
        else if (A[mid] < s){
            low = mid + 1;
        }
        else{
            printf("\n Found is mid position array A[%d] = %d",mid, A[mid] );
            break;
        }
    }
    if(low>high){
            printf("Not Found");
        }

    return 0;
}

