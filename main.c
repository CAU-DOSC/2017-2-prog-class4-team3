#include "header.h"

int main(void) 
{
	int a;
	int crt = 0;
	int n;
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
		scanf("%d", &n);
		if (feof(stdin))
			break;
		appendnode(head, crt++, n);
	}
	printf("�ڷ� ���� >> ");
	printf("%d", countnode(head));
	puts("");
	printf("���� ��� >> ");
	printorder(head);
	puts("");
	printf("���� ��� >> ");
	printreverse(head);
	puts("");
	printf("�߰��� ��� >> ");
	printmid(head, countnode(head));
	puts("");
	printf("1 : Ȧ����° ����, 2 : ¦����° ����\n");
	scanf("%d", &a);
	printf("Ȧ����° ���� �� ��� >> ");
	if(a==1)
		delodd(head, countnode(head));
	else if(a==2)
		deleven(head, countnode(head));
	puts("");
	return 0;
}