#include "header.h"

void appendnode(node *head, int position, int value)
{
	node *newnode;
	newnode = (node *)malloc(sizeof(node));
	newnode->next = NULL;
	node *crtnode = head;
	for (int i = 0; i < position; i++)
		crtnode = crtnode->next;
	crtnode->next = newnode;
	crtnode->next->value = value;
}
void deletenode(node *head, int n)
{
	node *crtnode = head;
	for (int i = 1; i < n; i++)
		crtnode = crtnode->next;
	node *temp = crtnode->next;
	crtnode->next = crtnode->next->next;
	free(temp);
}
int printvalue(node *head, int n)
{
	node *crtnode = head;
	for (int i = 0; i < n; i++)
		crtnode = crtnode->next;
	return crtnode->value;
}
int countnode(node *head)
{
	int i = 0;
	while (head->next != NULL)
	{
		head = head->next;
		i++;
	}
	return i;
}
void printorder(node *head)
{
	head = head->next;
	if (head != NULL)
	{
		printf("%d ", head->value);
		printorder(head);
	}
}
void printreverse(node *head)
{
	if (head->next != NULL)
	{
		printreverse(head->next);
		printf("%d ", head->next->value);
	}
}
void printmid(node *head, int count)
{
	if (count % 2)
		printf("%d", printvalue(head, (count / 2) + 1));
	else
		printf("%d %d", printvalue(head, count / 2), printvalue(head, (count / 2) + 1));
}
void delodd(node *head, int count)
{
	if (count > 1)
	{
		for (int i = 0; i < (count + 1) / 2 ; i++)
			deletenode(head, i + 1);
	}
	printorder(head);
}
void deleven(node *head, int count)
{
	if (count > 1)
	{
		for (int i = 0; i < (count / 2); i++)
			deletenode(head, i + 2);
	}
	else
		;
	printorder(head);
}
