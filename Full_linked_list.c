#include<stdio.h>
#include<stdlib.h>
typedef struct Node node;
node* create_node(int key);
void print(node *head);
int empty(node *head);
int size(node *head);
int first(node *head);
int end(node *head);
node adress(node head, int key);

struct Node{
	int value;
	node *next;
};

node* create_node(int key)
{
	node *temp = NULL;
	temp = (node*)malloc(sizeof(node));
	temp->value = key;
	temp->next = NULL;
	return temp;
}
void print(node *head)
{
	node *temp = head;
	if(head==NULL)
	{
		printf("list is empty");
	}
	while(temp)
	{
		printf("%d ",temp->value);
		temp = temp->next;
	}
	printf("\n");
}
int empty(node *head)
{
	if(head == NULL){
		return true;
	}
	else{
		return false;
	}
}
int size(node *head)
{
	int count = 0;
	node *temp = head;
	while(temp)
	{
		count++;
		temp = temp->next;
	}
	return count;
}
int first(node *head)
{
	if(head==NULL)
	{
		return 0;
	}
	return head->value;
}
int end(node *head)
{
	node *temp = head;
	node *last = NULL;
	if(head == NULL)
	{
		return NULL;
	}
	while(temp)
	{
		last = temp;
		temp = temp->next;
	}
	return last;
}
node* adress(node head, int key)
{
	node *temp = head;
	while(temp)
	{|
		if(temp->value==key)
		{
			return temp;
		}
		temp = temp->next;
	}
	return NULL;
}
void update(node *head, int key, int update)
{
	node *temp = head;
	temp = adress(head, key);
	if(temp)
	{
		temp->value = update;
	}
}
node* delete(node *head)
{
	node *temp = head;
	node *last = NULL;
	if(temp == NULL)
	{
		printf("Underflow\n");

	}
	if(temp->next==NULL)
	{
		free(temp);
		return NULL;
	}
	while(temp)
	{
		last = temp;
		temp = temp->next;
	}
	free(last->next);
	last->next = NULL;
	return head;
}
node* insert_front(node *head, int key)
{
	node *new_node = create_node(key);
	if(head == NULL)
	{
		return new-head;
	}
	new_head->next = head;
	return new_head;
}
node* insert_back(node *head, int key)
{
	node *new_end = create_node(key);
	if(head==NULL)
	{
		return last;
	}
	node *last = end(head);
	last->next = new_end;
	return head;

}

int main()
{

	return 0;
}
