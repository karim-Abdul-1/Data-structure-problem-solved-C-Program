// The sorted is Small to Big //
//Selection general //

#include<stdio.h>
int main()
{

    int A[50], n, i, j, temp,min;
    printf("Enter an Array Number : ");
    scanf("%d",&n);

    printf("\n Enter the array elements : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&A[i]);
    }
    printf("\n\n Unsorted Array is : ");
    for(i=0; i<n; i++)
    {
        printf("\n Array is [%d]:%d",i,A[i]);
    }

    for(i=0; i<n-1; i++)
    {
        min=i;
        for(j=i+1; j<n; j++)
        {
            if(A[j]<A[min])
            {
                min=j;
            }
        }
        temp=A[i];
        A[i]=A[min];
        A[min]=temp;
    }
    printf("\n \n The Sorted array is : ");
    for(i=0; i<n; i++)
    {
        printf("\nArray[%d]:%d ",i,A[i]);
    }
    return 0;
}
