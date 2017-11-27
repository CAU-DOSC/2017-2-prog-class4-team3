#include "header.h"

void appendnode(node *head, int position, int value);
void deletenode(node *head, int n);
int printvalue(node *head, int n);
int countnode(node *head);
void printorder(node *head);
void printreverse(node *head);
void printmid(node *head, int count);
void delodd(node *head, int count);
void deleven(node *head, int count);

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
	printf("\n"); 
	printf("자료 개수 >> ");
	printf("%d", countnode(head));
	printf("\n\n");
	printf("정순 출력 >> ");
	printorder(head);
	printf("\n\n");
	printf("역순 출력 >> ");
	printreverse(head);
	printf("\n\n");
	printf("중간값 출력 >> ");
	printmid(head, countnode(head));
	printf("\n\n");
	printf("1번(홀수번째 삭제), 2번(짝수번째 삭제) : ");
	scanf("%d", &a);
	printf("\n"); 
	if(a==1)
	{
		printf("홀수번째 삭제 후 출력 >> ");
		delodd(head, countnode(head));
	}
	else if(a==2)
	{
		printf("짝수번째 삭제 후 출력 >> ");
		deleven(head, countnode(head));
	}
	printf("\n");
	return 0;
}
