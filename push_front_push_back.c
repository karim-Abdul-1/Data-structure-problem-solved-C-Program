#include<stdio.h>
#include<stdlib.h>

typedef struct Node node;
node* create_node(int data);
node* push_front(node* temp, int data);
node* push_back(node* tail, int data);
void travers(node* temp);

struct Node{
    int data;
    node* next;

};

int main()
{
  node* temp = (node*)malloc(sizeof(node));

  temp = create_node(35);
  temp = push_front(temp,45);
  temp = push_front(temp,55);
  travers(temp);

//  temp = create_node(35);
//  temp = push_back(temp,45);
//  temp = push_back(temp,55);
//  travers(temp);

}

node* create_node(int data)
{
    node* temp = (node*)malloc(sizeof(node));

    temp->data = data;
    temp->next = temp;
    return temp;
}

node* push_front(node* temp, int data)
{
    node* new_temp = (node*)malloc(sizeof(node));

    new_temp->data = data;
    new_temp->next = temp->next;
    temp->next = new_temp;
    return new_temp;
}

node* push_back(node* tail, int data)
{
    node* newP =(node*) malloc(sizeof(node));
    newP->data = data;
    newP->next = tail->next;
    tail->next = newP;
    return tail;
}

void travers(node* temp)
{
//    do
//    {
//        printf("%d ",temp->data);
//        temp->next = temp;
//    }
//    while(temp!=temp->next);

    node* p = temp->next;

  do {
  printf("%d ", p->data);
  p = p->next;

  } while (p != temp->next);
}
