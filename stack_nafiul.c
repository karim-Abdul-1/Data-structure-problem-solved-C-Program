#include<stdio.h>
#include<stdlib.h>
typedef struct stackNode stack;    //stack
stack* create_node(int key);
void print(stack *head);
stack* push(stack *head, int key);
int empty(stack *head);
int size(stack *head);
int top(stack *head);
stack* pop(stack *head);
int front(stack *head);

struct stackNode{
	int value;
	 stack *next;

};

int main()    ////stack
{
	stack *s = NULL;
	int key = 0;
	printf("empty:%d\n",empty(s));
	s = push(s, key = 5);
	s = push(s, key = 4);
	s = push(s, key = 3);
	s = push(s, key = 2);
	s = push(s, key = 1);
	s = push(s, key = 0);
	print(s);
	pop(s);
	printf("size: %d\n",size(s));
	print(s);
	printf("size: %d\n",size(s));
	printf("top: %d\n",top(s));
	printf("front value: %d\n",front(s));

    return 0;
}

	stack* create_node(int key){
		stack *temp = NULL;
		temp = (stack*)malloc(sizeof(stack));
		temp->value = key;
		temp->next = NULL;
		return temp;
	}
	void print(stack *head)
	{
		stack * temp = head;
		while(temp)
		{
			printf("%d ",temp->value);
			temp = temp->next;
		}
		printf("\n");
	}
	stack* push(stack *head, int key)
	{
		stack *temp = head;
		stack *last = NULL;
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
	int empty(stack *head)
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
	int size(stack *head)
	{
		stack *temp = head;
		int count = 0;
		while(temp)
		{
			count++;
			temp = temp->next;
		}
		return count;
	}
	int top(stack *head)
	{
		stack *temp = head;
		stack *last = NULL;
		while(temp)
		{
			last = temp;
			temp = temp->next;
		}
		return last->value;
	}
	stack* pop(stack *head)
	{
		stack *temp = head;
		stack *last = NULL;
		if(temp == NULL)
		{
			printf("stack Underflow\n");
			return NULL;
		}
		if(temp->next == NULL)
		{
			free(temp);
			return NULL;

		}
		while(temp->next)
		{
			last = temp;
			temp = temp->next;

		}
		free(last->next);
		last->next = NULL;
		return head;
	}
	int front(stack *head)
	{
		if(head == NULL){
			return 0;
		}
		return head->value;
	}

