#include "header.h"

void appendnode(node *head, int value)
{
	node *newnode = NULL;
	newnode = (node *)malloc(sizeof(node));
	newnode->value = value;
	while (head->next == NULL)
		head = head->next;
	head->next = newnode;
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
	int i;
	for (i = 1; head->next != NULL; i++)
		head = head->next;
	return i;
}
void printorder(node *head)
{
	if (head != NULL)
	{
		printf("%d ", head->value);
		printorder(head->next);
	}
}
void printreverse(node *head)
{
	if (head != NULL)
	{
		printreverse(head->next);
		printf("%d ", head->value);
	}
}
void printmid(node *head, int crt)
{
	int temp;
	if (crt % 2 == 0)
	{
		temp = crt / 2;
		for (int i = 1; i < temp; i++)
			head = head->next;
		printf("%d %d", head->value, head->next->value);
	}
	else
	{
		temp = (crt - 1) / 2;
		for (int i = 0; i < temp; i++)
			head = head->next;
		printf("%d", head->value);
	}
}
void delodd(node *head, int count)
{
	node *del = head;
	head = head->next;
	printf("%d ", head->value);
	free(del);
	for (int i = 0; i < (int)(count / 2) - 1; i++)
	{
		del = head->next;
		head = head->next->next;
		printf("%d ", head->value);
		free(del);
	}
}
void deleven(node *head, int count)
{
	node *del = head->next;
	printf("%d ", head->value);
	free(del);
	for (int i = 0; i < (int)(count / 2); i++)
	{
		del = head->next;
		head = head->next->next;
		printf("%d ", head->value);
		free(del);
	}
}