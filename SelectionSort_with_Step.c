// The sorted is Small to Big //
// SelectionSort Step //
#include<stdio.h>
int main()
{

    int A[50], n, i, j,k,temp,min;
    printf("Assalamualaikum MY Dear SADIA MAM.\n");
    printf("AJk ei apnr sathe last class and lastdekha amdr sobar.\n");
    printf("Amdr sobar jonno mam dowa keben.\n");
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
        printf("\n Array is A[%d]:%d",i,A[i]);
    }

    for(i=0; i<n-1; i++)
    {
        printf("\n -----STEP %d : ",i);
        min=i;
        for(j=i+1; j<n; j++)
        {
            printf("\n Pass i=%d minimum=%d j=%d : \n",i, min, j);
            if(A[j]<A[min])
            {
                min=j;

            }
                for(k=0;k<n;k++)
            {
                printf("%d",A[k]);
            }
            printf("\n after result is J: %d \n",j);

        }
        temp=A[i];
        A[i]=A[min];
        A[min]=temp;
        for(k=0;k<n;k++)
            {
                printf("%d",A[k]);
            }
    }

    printf("\n \n The Sorted array is : ");
    for(i=0; i<n; i++)
    {
        printf("\nArray[%d]:%d ",i,A[i]);
    }
    return 0;
}

