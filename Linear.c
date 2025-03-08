// Linear //
#include<stdio.h>
int main()
{
    int A[50], n, s, i;
    printf("Enter an Array number : ");
    scanf("%d",&n);

    printf("Enter the number : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&A[i]);
    }
    printf("\n Enter the Search number : ");
    scanf("%d",&s);

    for(i=0; i<n; i++)
    {
        if(A[i]== s)
        {
            printf("\n Found");
            break;
        }

    }
    if(i==n){
        printf("Not found");
    }
    return 0;
}
