#include<stdio.h> // dequee
#include<stdlib.h>
typedef struct dequeeNode dequee;

dequee* create_node(int key);
dequee* push_front(dequee *head, int key);
dequee* push_back(dequee *head, int key);
void print(dequee *head);
dequee* pop_back(dequee *head);
dequee* pop_front(dequee *head);

struct dequeeNode{
	int value;
	dequee *next;

};

int main()
{
	dequee *s = NULL;
	int key = 0;
	s = push_front(s, key = 10);
	travers_print(s);
	s = push_back(s, key = 1);
	s = push_back(s, key = 2);
	s = push_back(s, key = 3);
	s = push_back(s, key = 4);
	travers_print(s);
	s = pop_front(s); /// pop front first node delete
	travers_print(s);
	s= pop_back(s); /// pop back last node delete
	travers_print(s);


	return 0;
}


dequee* create_node(int key)
{
	dequee *temp = NULL;
	temp = (dequee*) malloc (sizeof(dequee));
	temp ->value = key;
	temp->next = NULL;
	return temp;
}

void travers_print(dequee* head)
	{
		dequee* temp = head;
		while(temp)
		{
			printf("%d ",temp->value);
			temp = temp->next;
		}
		printf("\n");
	}

	dequee* push_front(dequee* head, int key)
{
	dequee* new_head = create_node(key);
	if(head == NULL)
	{
		return new_head;
	}
	new_head->next = head;
	return new_head;

}

dequee* push_back(dequee* head, int key)
{
	if(head == NULL){
		return create_node(key);
	}
	dequee* temp = head;
	dequee* last = NULL;
	while(temp){
			last = temp;
			temp = temp->next;

		}
		last->next = create_node(key);
		return head;
}

dequee* pop_front(dequee *head)
{
	if(head == NULL)
	{
		printf("dequee UNderfollow\n");
		return head;
	}
	dequee *temp = head;
	dequee *new_head = head->next;
	free(temp);
	return new_head;
}


dequee* pop_back(dequee *head)
{
	if(head == NULL)
	{
		printf("Dequeee underfollow\n");
		return NULL;
	}
	if(head->next == NULL)
	{
		free(head);
		return NULL;
	}
	dequee *temp = head;
	dequee *last = NULL;
	while(temp->next)
	{
		last = temp;
		temp = temp->next;
	}
	free(last->next);
	last->next = NULL;
	return head;
}
