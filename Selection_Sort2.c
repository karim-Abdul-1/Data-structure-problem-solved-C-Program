// The sorted is Small to Big //


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
    printf("\nThe Sorted array is : ");
    for(i=0; i<n; i++)
    {
        printf("\nArray[%d]:%d",i,A[i]);
    }
    return 0;
}
