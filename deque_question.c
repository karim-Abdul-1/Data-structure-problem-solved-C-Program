#include<stdio.h>
#include<stdlib.h>
typedef struct deqNode dnode;
dnode* create_node(int key);
int empty_list(dnode* head);
int travers_list(dnode* head);
dnode* push_back(dnode* head, int key);
dnode* pop_back(dnode* head);


struct deqNode{
int value;
dnode *next;
};

int main()
{
    dnode *a=NULL;
    //dnode *head=NULL;
    int key=0;
    travers_list(a);
    a=push_back(a,key=1);
    a=push_back(a,key=2);
    a=push_back(a,key=3);
    a=push_back(a,key=4);
    travers_list(a);
    a=pop_back(a);
    travers_list(a);

}
dnode* create_node(int key)
{
    dnode *temp=NULL;
    temp=(dnode*)malloc(sizeof(dnode));
    temp->value=key;
    temp->next=NULL;

    return temp;
}
int empty_list(dnode* head)
{
    dnode* temp=head;
    if(temp==NULL){
        return 1;
    }
    else{
        return 0;
    }
}
 int travers_list(dnode* head)
 {
    /* if(empty_list(head)){
        printf("List is empty");
     }
     else{*/
        dnode* temp=head;
        while(head!=NULL){
            printf("%d ",temp->value);
            temp=temp->next;
        }
        printf("\n");
     }

 dnode* push_back(dnode* head, int key)
 {
     if(head==NULL)
     {
         return create_node(key);
     }
     dnode* temp = head;
	dnode* last = NULL;
	while(temp){
			last = temp;
			temp = temp->next;

		}
		last->next = create_node(key);
		return head;
}
dnode* pop_back(dnode* head)
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
	dnode* temp = head;
	dnode* last = NULL;
	while(temp->next)
	{
		last = temp;
		temp = temp->next;
	}
	free(last->next);
	last->next = NULL;
	return head;

}

