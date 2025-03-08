#include<stdio.h>
selection(int A[],int n)
{

    int i,j,m,t,k;
    printf("\n enter the array index number:\n");
    for(i=0; i<n; i++)
    {
        printf("array index[%d]=%d\n",i,A[i]);

        printf("\n");
        for(i=0; i<n-1; i++)
        {
            m=i;
            printf("\n.....step...%d",i);
            for(j=i+1; j<n; j++)
            {
                printf("\n pass i=%d j=%d :\n",i, j);
                if(A[j]<A[m])
                {
                    m=j;
                    for(k=0; k<n; k++)
                    {
                        printf(" %d ",A[k]);
                    }
                }
                printf("\n After Step i=%d j=%d : \n",i, j);

            }

            t=A[m];
            A[m]=A[i];
            A[i]=t;
            for(k=0; k<n; k++)
            {
                printf(" %d ",A[k]);
            }

        }



        printf("\n sorted array is:\n");
        for(i=0; i<n; i++)
        {
            printf("\n array[%d]=%d",i,A[i]);
        }

    }
}

int main()
{

    int A[37],i,j,n;
    printf("enter the value:");
    scanf("%d",&n);
    printf("enter the array number:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&A[i]);
    }


    selection(A,n);
    return 0;
}
