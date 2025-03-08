#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
typedef struct queueNode qu; //quee

qu* create_node(int key);
void print(qu *head);
qu* push(qu *head, int key);
int empty(qu *head);
int size(qu *head);
int top(qu *head);
qu *pop(qu *head);
int front(qu *head);

struct queueNode{
	int value;
	qu *next;
};

int main()
	{
		qu *s = NULL;
		int key = 0;
		s = push(s, key = 1);
		s = push(s, key = 2);
		s = push(s, key = 3);
		s = push(s, key = 4);
		s = push(s, key = 5);
		travers_print(s);
		s=pop(s);
		travers_print(s);
		printf("front value: %d\n",front(s));
		printf("last/top value: %d\n",top(s));
		printf("size: %d\n",size(s));
		return 0;
	}
	qu* create_node(int key){
		qu *temp = NULL;
		temp = (qu*)malloc(sizeof(qu));
		temp->value = key;
		temp->next = NULL;
		return temp;
	}
	void travers_print(qu *head)
	{
		qu * temp = head;
		while(temp)
		{
			printf("%d ",temp->value);
			temp = temp->next;
		}
		printf("\n");
	}
	qu* push(qu *head, int key)
	{
		qu *temp = head;
		qu *last = NULL;
		if(temp == NULL)
		{
			return create_node(key);
		}
		while(temp){
			last = temp;
			temp = temp->next;

		}
		last->next = create_node(key);
		return head;
	}
	int empty(qu *head)
	{
		if(head == NULL)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	int size(qu *head)
	{
		qu *temp = head;
		int count = 0;
		while(temp)
		{
			count++;
			temp = temp->next;
		}
		return count;
	}

	int front(qu *head)
	{
		if(head == NULL){
			return 0;
		}
		return head->value;
	}
	int top(qu *head)
	{
		qu *temp = head;
		qu *last = NULL;
		while(temp)
		{
			last = temp;
			temp = temp->next;
		}
		return last->value;
	}
	qu *pop(qu *head){
		if (head == NULL)
		{
			printf("queue Underflow\n");
		}
		qu *temp = head;
		qu *new_head = head->next;
		free(temp);
		return new_head;
	}


