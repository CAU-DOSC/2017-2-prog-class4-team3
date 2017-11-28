#include "header.h"


int main(void)
{
	int number;
	int crt = 0;
	int value;
	node *head = NULL;
	head = (node *)malloc(sizeof(node));
	while (!fflush(stdin))
	{
		if (crt == 0)
			printf("Create %dst node (Ctrl + Z to terminate) >> ", crt + 1);
		else if (crt == 1)
			printf("Create %dnd node (Ctrl + Z to terminate) >> ", crt + 1);
		else
			printf("Create %dth node (Ctrl + Z to terminate) >> ", crt + 1);
		scanf("%d", &value);
		if (feof(stdin))
			break;
		appendnode(head, crt++, value);
	}
	printf("\n");
	printf("Number of Materials >> ");
	printf("%d", countnode(head));
	printf("\n\n");
	printf("Print in Order >> ");
	printorder(head);
	printf("\n\n");
	printf("Print in Reverse >> ");
	printreverse(head);
	printf("\n\n");
	printf("Print Mid Value >> ");
	printmid(head, countnode(head));
	printf("\n\n");
	printf("1 : Delete Materials in Odd Order , 2 : Delete Materials in Even Order >> ");
	scanf("%d", &number);
	printf("\n");
	switch (number)
	{
	case 1:
		printf("Print After Odd Delete >> ");
		delodd(head, countnode(head));
		break;
	case 2:
		printf("Print After Even Delete >> ");
		deleven(head, countnode(head));
		break;
	default:
		printf("Wrong Value \n");
	}
	return 0;
}