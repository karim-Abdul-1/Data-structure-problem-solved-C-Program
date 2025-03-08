// Insertion Sort Function //
#include<stdio.h>
int callbyArray(int A[],int n)
{
    int i,j,t,k;


    printf(" \n Before the  sorting element\n: ");
    printf("\n Array number:");


    for( i=0; i<n; i++)
    {

        printf(" \n Array index number A[%d]=%d ",i,A[i]);
    }


    for( i=1; i<n; i++)
    {
        j=i-1;
        printf(" \n ....STEP...%d",i);


        t=A[i];

        while(A[j]>t && j>=0)
        {
            A[j+1]=A[j];
            j--;

            printf("\n Pass i=%d j=%d:",i,j);
            for(k=0; k<n; k++)
            {
                printf("%d ",A[k]);
            }


        }
        A[j+1]=t;

        printf("\n After the step:i=%d j=%d:",i,j);
        for( k=0; k<n; k++)
        {
            printf(" %d ",A[k]);
        }
    }

    printf("\n After the sorting element:");

    printf("\n Output the insertion number:");
    for(i=0; i<n; i++)
    {
        printf(" \n Insertion index number A[%d]=%d\n",i,A[i]);
    }




}
int main()
{
    printf("\n Welcome to sadia mam!\n Lecture of department CSE. City university\n");





    int A[30],i,n;
    printf("Enter the user number:\n");
    scanf("%d",&n);
    printf("Enter the array number :\n");

    for(i=0; i<n; i++)
    {
        scanf("%d",&A[i]);
    }

    callbyArray(A,n);



    return  0;
}
