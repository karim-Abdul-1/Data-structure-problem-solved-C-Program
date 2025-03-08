// The sorted is Small to Big //
// Bubble Sort General //

#include<stdio.h>
int main()
{
    int A[50],n,i,j,temp;
    printf("Enter an Array Number : ");
    scanf("%d",&n);

    printf("\n Enter the array elements : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&A[i]);
    }
    for(i=0; i<n-1; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(A[i]>A[j])
            {
                 temp=A[j];
                 A[j]=A[i];
                 A[i]=temp;
            }
        }
    }
    printf("\n The sorted Array is : ");
    for(i=0; i<n; i++)
    {
        printf("\n The array is[%d]:%d",i,A[i]);
    }
    return 0;
}
