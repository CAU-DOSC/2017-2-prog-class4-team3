#include "header.h"

int main()
{
	double startTime, endTime;
	printf("STRLength	ROTATEdistance	T.trivial	T.juggle	T.bw	T.reverse\n");
	while (1)
	{
		if (gendata() == 0)
			break;
		else
		{
			char *tstr = (char*)malloc(sizeof(char)*(n + 1));
			strcpy(tstr, str);
			startTime = clock();
			//trivial �Լ� �ֱ�
			endTime = clock();
			time1 = (double)(endTime - startTime) / CLOCKS_PER_SEC;
			startTime = clock();
			//juggle �Լ� �ֱ�
			endTime = clock();
			time2 = (double)(endTime - startTime) / CLOCKS_PER_SEC;
			startTime = clock();
			//bw �Լ� �ֱ�
			endTime = clock();
			time3 = (double)(endTime - startTime) / CLOCKS_PER_SEC;
			startTime = clock();
			reversal(tstr);
			endTime = clock();
			time4 = (double)(endTime - startTime) / CLOCKS_PER_SEC;
			printvalue();
			free(tstr);
		}
	}
	return 0;
}