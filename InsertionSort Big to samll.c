// The sorted is Big to Small ///
// Insertion Sort General //
#include<stdio.h>
int main()
{
    int n,i, j, A[20],temp;
    printf("Enter an array Number : ");
    scanf("%d",&n);

    printf("\n Enter the array element :  ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&A[i]);
    }
    printf("\n The array element is : ");
    for(i=0; i<n; i++)
    {
        printf("\nIndex number A[%d] : %d",i,A[i]);
    }
    for(i=1; i<n; i++)
    {
        j=i-1;
        temp=A[i];
        while(A[j]<temp && j>=0)
        {
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=temp;
    }
    printf("\n \n The sorted value is : ");
    for(i=0; i<n; i++)
    {
        printf("\n Array is A[%d] : %d",i,A[i]);
    }
    printf("\n");
    return 0;
}
