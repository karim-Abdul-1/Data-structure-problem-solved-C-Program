// Bubble Sort Function //
#include<stdio.h>
BubbleArray(int A[],int n)
{
    int i,j,k;
printf("\n enter the array index number:\n");
    for(i=0; i<n; i++)
    {
        printf("array index[ A%d]=%d\n",i,A[i]);
    }
    printf("\n");
    for(i=0; i<n; i++)
    { printf("\n.....step....%d:",i);

        for(j=i+1; j<n; j++)
        {
            printf("\n pass i=%d j=%d :",i, j);

            if(A[i]>A[j])
            {
        for(k=0;k<n;k++)
            {
                printf(" %d ",A[k]);
            }
                int t;
                t=A[i];
                A[i]=A[j];
                A[j]=t;
            }

printf("\n After Step i=%d j=%d : ",i, j);
        }
        for(k=0;k<n;k++)
            {
                printf(" %d ",A[k]);
            }
    }
        printf("\n bubble sorted array is:\n");
        for(i=0; i<n; i++)
        {
            printf("\n bubble sorted array index [%d]=%d",i,A[i]);
        }

}

int main()
{

    int A[37],i,n;
    printf("enter the value:");
    scanf("%d",&n);
    printf("enter the array number:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&A[i]);
    }


        BubbleArray(A,n);


        return 0;

}
