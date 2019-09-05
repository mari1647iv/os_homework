#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
	int value;
	struct Node *next;
}Node;

void insert_first(Node** head,  int val);
void insert_node(Node* current, int after, int val);
void print_list(Node *current);
void append(Node** current, int val);
void delete_node(Node** head, int del);

int main()
{
	Node* list = NULL;
	insert_first(&list, 7);
	insert_first(&list, 15);
	insert_first(&list, 34);
	insert_node(list, 34, 8);
	append(&list, 88);
	delete_node(&list, 34);
	print_list(list);
	return 0;
}

void insert_first(Node** head, int val) 
{ 
    Node* new = (Node*) malloc(sizeof(Node));
    new->value  = val;
    new->next = *head;
    (*head) = new; 
} 

void insert_node(Node* current, int after, int val) 
{ 
    	while ((current->value != after)&&(current != NULL)) 
	{ current = current->next; }   
           
    	if (current != NULL)
	{
    		Node* new =(Node*) malloc(sizeof(Node)); 
   		new->value  = val; 
   		new->next = current->next;  
   		current->next = new; 
	}
} 

void append(Node** head, int val) 
{ 
 	Node* new = (Node*) malloc(sizeof(Node)); 
	new->value  = val; 
	new->next = NULL; 

 	if (*head == NULL) 
    	{ 
       		*head = new; 
      	 	return; 
    	}  
 
    	Node *last = *head;
    	while (last->next != NULL) 
    		{ last = last->next; } 
    	last->next = new; 
} 

void delete_node(Node** head, int del)
{
	Node* current = *head;
	if(current==NULL)
	{ return; }
	if(current->value == del)
	{ 
		*head=(*head)->next; 
		return;
	}
    	while ((current->next != NULL)&&(current->next->value != del)) 
	{ current = current->next; }   
           
    	if (current->next != NULL)
	{ current->next  = current->next->next; }
}

void print_list(Node* current) 
{
    	while (current != NULL) 
	{ 
        	printf("%d ", current->value); 
       		current = current->next; 
   	} 
}