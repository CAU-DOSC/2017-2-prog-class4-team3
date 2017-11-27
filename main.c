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
	int number;
	int crt = 0;
	int value;
	node *head = NULL;
	head = (node *)malloc(sizeof(node));
	while (!fflush(stdin))
	{
		if (crt == 0) printf("Create %dst node (Ctrl + Z to terminate) >> ", crt + 1);
		else if (crt == 1) printf("Create %dnd node (Ctrl + Z to terminate) >> ", crt + 1);
		else printf("Create %dth node (Ctrl + Z to terminate) >> ", crt + 1);
		scanf("%d", &value);
		if (feof(stdin))
			break;
		appendnode(head, crt++, value);
	}
	printf("\n"); 
	printf("자료들의 개수 >> ");
	printf("%d", countnode(head));
	printf("\n\n");
	printf("정순으로 출력 >> ");
	printorder(head);
	printf("\n\n");
	printf("역순으로 출력 >> ");
	printreverse(head);
	printf("\n\n");
	printf("중간값을 출력 >> ");
	printmid(head, countnode(head));
	printf("\n\n");
	do
	{
		printf("1번(홀수번째 삭제), 2번(짝수번째 삭제) : ");
		scanf("%d", &number);
		printf("\n"); 
		if(number==1)
		{
			printf("홀수번째 삭제 후 출력 >> ");
			delodd(head, countnode(head));
			 
		}
		else if(number==2)
		{
			printf("짝수번째 삭제 후 출력 >> ");
			deleven(head, countnode(head));
		}
		else
		{
			printf("Error, Please re-enter.");
			printf("\n");
		}
		printf("\n"); 
	}while(number != 1 && number != 2);
	
	return 0;
}
