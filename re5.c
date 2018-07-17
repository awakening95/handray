#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *next;
};

struct list {
	struct node *head;
	struct node *tail;
};

void list_printall(struct list *v1)
{
	struct node *search_node=v1->head;

	while(search_node!=NULL)
	{
		printf("%d\n",search_node->data);
		search_node = search_node->next;
	}
}

int list_add_to_tail(struct list *v1, int n)
{
	if(v1->head==NULL)
	{
		v1->tail =  malloc(16);
		v1->tail->data = n;
		v1->tail->next = NULL;
		v1->head = v1->tail;
	}
	else
	{
		v1->tail->next = malloc(16);
		v1->tail->next->data = n;
		v1->tail->next->next = NULL;
		v1->tail = v1->tail->next;	
	}
}

int list_init(struct list *v1)
{
	v1->tail = NULL;
	v1->head = v1->tail;
}

int main()
{
	struct list v1;
	list_init(&v1);
	list_add_to_tail(&v1, 1);
	list_add_to_tail(&v1, 2);
	list_add_to_tail(&v1, 3);
	list_printall(&v1);
	return 0;
}
