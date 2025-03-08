#include<stdio.h>
typedef struct Pointer pointer;
struct Pointer{
int x;
int y;
};
int main()
{
    pointer p;
    pointer *b;
    b=&p;

    printf("Enter the two values : ");
    scanf("%p %p",&p.x, &p.y);
    printf("%p %p \n",p.x,p.y);

    printf("%p %p \n",b->x,b->y);

    return 0;
}

