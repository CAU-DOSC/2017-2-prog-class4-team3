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
	printf("자료 개수 >> ");
	printf("%d", countnode(head));
	puts("");
	printf("정순 출력 >> ");
	printorder(head);
	puts("");
	printf("역순 출력 >> ");
	printreverse(head);
	puts("");
	printf("중간값 출력 >> ");
	printmid(head, countnode(head));
	puts("");
	printf("1 : 홀수번째 삭제, 2 : 짝수번째 삭제\n");
	scanf("%d", &a);
	printf("홀수번째 삭제 후 출력 >> ");
	if(a==1)
		delodd(head, countnode(head));
	else if(a==2)
		deleven(head, countnode(head));
	puts("");
	return 0;
}