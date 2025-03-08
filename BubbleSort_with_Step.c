// The sorted is Small to Big //
// Bubble Sort Step //
#include<stdio.h>
int main()
{
    int A[50],n,i,j,k,temp;
    printf("Enter an Array Number : ");
    scanf("%d",&n);

    printf("\n Enter the array elements : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&A[i]);
    }
    for(i=0; i<n; i++)
    {
        printf("\nThe array element is A[%d]:%d \n",i,A[i]);
    }

    for(i=0; i<n-1; i++)
    {
        printf("\n -----STEP %d : ",i);
        for(j=i+1; j<n; j++)
        {
            printf("\n Pass i=%d j=%d : ",i,j);
            if(A[i]>A[j])
            {
                for(k=0;k<n;k++)
            {
                printf("%d",A[k]);
            }

                 temp=A[j];
                 A[j]=A[i];
                 A[i]=temp;
            }
             printf("\n after result is J:%d ",j);

        }
        for(k=0;k<n;k++)
            {
                printf("%d",A[k]);
            }
    }
    printf("\n The sorted Array is : ");
    for(i=0; i<n; i++)
    {
        printf("\n The array is[%d]:%d",i,A[i]);
    }
    return 0;
}

