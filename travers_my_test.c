#include<stdio.h>
#include<stdlib.h>

typedef struct Node node;
node* create_node(int key);
void print_node(node *n);
int test_list_empty(node* head);
void travers_print_list(node* head);
int list_size(node* head);

struct Node{
int value;
node *next;
};
int main()
{
   node *a=NULL;
   node *b =NULL;
   node *c= NULL;
   node *head = NULL;

   a=create_node(1);
   b=create_node(2);
   c=create_node(3);

    //print_node(a);
    //print_node(b);
    //print_node(c);

    head=a;
    a->next=b;
    b->next=c;

    travers_print_list(head);
    printf("List Size : %d\n",list_size(head));


}

/// travares list empty
int test_list_empty(node* head){
    node* temp=head;
    if(temp==NULL){
        return 1;
    }
    else{
        return 0;
    }
}

/// travers list
void travers_print_list(node* head){
    if(test_list_empty(head)){
        printf("List is empty\n");
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

/// travers list size
int list_size(node* head){
node* temp= head;
int count=0;
while(head==NULL){
    count++;
    temp=temp->next;
    }
    return count;
}

/// create Node
node* create_node(int key){
node *new_node = NULL;
new_node=(node*)malloc(sizeof(node));
new_node->value=key;
new_node->next=NULL;
return new_node;
}
void print_node(node *n){
printf("%d ",n->value);
}
