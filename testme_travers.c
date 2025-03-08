#include<stdio.h>
#include<stdlib.h>
typedef struct Node node;
node* create_node(int key);
void print_node(node *n);
int empty_list(node* head);
void trabers_list(node* head);
int list_size(node* head);

struct Node{
int value;
node *next;
};
int main()
{
    node *a=NULL, *b=NULL, *c=NULL, *d=NULL;
    node *head=NULL;
    a=create_node(1);
    b=create_node(2);
    c=create_node(3);
    d=create_node(4);

    //print_node(a);
   // print_node(b);
   // print_node(c);
    //print_node(d);

    head=a;
    a->next=b;
    b->next=c;
    c->next=d;

   trabers_list(head);
   printf("List Size is : %d\n",list_size(head));


    return 0;
}
/// create node//
node* create_node(int key)
{
    node *new_node=NULL;
    new_node=(node*)malloc(sizeof(node));
    new_node->value=key;
    new_node->next=NULL;
    return new_node;
}

void print_node(node *n){
printf("%d ",n->value);
}

int empty_list(node* head)
{
    node* temp=head;
    if(head==NULL){
        return 1;
    }
    else{
        return 0;
    }
}

void trabers_list(node* head)
{
    if(empty_list(head))
    {
        printf("List is Empty\n");
    }
    else{
        node* temp=head;
        while(head!=NULL){
            printf("%d ",temp->value);
            temp=temp->next;
        }
        printf("\n");
    }
}
int list_size(node* head)
{
    node* temp=head;
    int count=0;
    while(temp){
        count++;
        temp=temp->next;
    }
    return count;
}
