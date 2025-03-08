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

    printf("%p \n",&p);
    printf("%p %p \n",&p.x,&p.y);
    printf("%p \n",&b);
    printf("%p %p \n",&b->x,&b->y);

    return 0;
}
