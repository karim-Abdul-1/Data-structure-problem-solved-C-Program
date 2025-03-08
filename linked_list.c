#include<stdio.h>
#include<stdlib.h>
typedef struct Node node;
node* create_node(key);
void print_node(node *n);
struct Node{
int value;
node *next;
};
int main()
{
    node *a = NULL;/// new_node = ekta pointer, eitar jkono kicu nam dewa jai
    node *b = NULL;/// pointer dile obossoi tar value null dite hobe, empty dewa jabe nah
    node *c = NULL;
    node *d = NULL;
    node *head = NULL;
/// *new_node = a ///
/// main function and function alada korar jonno a use korce///
    a =create_node(12);
    b =create_node(13);
    c =create_node(14);
    d =create_node(15);
    head=a;  /// head diye link krce aktar sathe arekta///
    a->next=b;
    b->next=c;
    c->next=d;
    /*new_node = (node*)malloc(sizeof(node));/// eikhane (node*) eita k typecasting kora hoica, eitar jaigai void howar kotha cilo///
    new_node->value=12;
    new_node->next=NULL;*/
    print_node(a);
    print_node(b);
    print_node(c);
    print_node(d);

    return 0;
}
node* create_node(int key)
{
    node *new_node = NULL;
    new_node = (node*)malloc(sizeof(node));
    new_node->value=key;
    new_node->next=NULL;

    return new_node;
}
void print_node(node *n){      /// void kono kicu return krbe na///
    printf("%d ",n->value);
}
