// The sorted is Small to Big //
// InsertionSort Step //
#include<stdio.h>
int main()
{
    int A[30], i, j, k, temp, n;
    printf("Enter an array number : ");
    scanf("%d",&n);

    printf("\n Enter the array element : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&A[i]);
    }

    for(i=0; i<n; i++)
    {
        printf("\n The array number is A[%d] : %d",i,A[i]);
    }
    printf("\n");
    for(i=1; i<n; i++)
    {
        j=i-1;

        temp=A[i];
        printf("\n------ Step %d -----",i);

        while(A[j]>temp && j>=0)
        {
            A[j+1]=A[j];
            printf("\n pass i=%d j=%d :\n ",i,j);
            j--;

            for(k=0;k<n;k++)
            {
                printf("%d",A[k]);
            }
        }
        A[j+1]=temp;
        printf("\n After Step i=%d j=%d : \n",i,j);
        for(k=0;k<n;k++)
            {
                printf("%d",A[k]);
            }
    }
    printf("\n Now the InsertionSorted value is : ");
    for(i=0; i<n; i++)
    {
        printf("\nSorted Array is A[%d] : %d\n",i,A[i]);
    }
    printf("\n");

    return 0;

}
