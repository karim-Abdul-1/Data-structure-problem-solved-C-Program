#include<stdio.h>
int main()
{
    int A[5],i,j, k,n,t=0;
    printf("enter the user number:\n");
    scanf("%d",&n);
    printf("enter the array number :\n");

    for(i=0; i<n; i++)
    {
        scanf("%d",&A[i]);

    }

    printf("\n array element:");

    for(i=0; i<n; i++)
    {

        printf("%d ",A[i]);
    }
    printf("\n");
    for(i=0; i<n; i++)
    {

        printf(" \n ....step...%d",i);


        t=A[i];

        for(j=i-1; A[j]>t &&j>=0; j--)
        {
            A[j+1]=A[j];

            printf("\n pass %d=i %d=j",i,j);
            for(k=0; k<n; k++)
            {
                printf("%d ",A[k]);
            }

        }
        A[j+1]=t;

        printf("\n after step %d=i %d=j",i,j);
        for(k=0; k<n; k++)
        {
            printf(" %d ",A[k]);
        }
    }
    printf("\n");
    printf(" output the insertion number:\n");
    for(i=0; i<n; i++)
    {
        printf(" insertion index number A[%d]=%d\n",i,A[i]);
    }
    return 0;
}
