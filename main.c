#include "header.h"

int main()
{
	double startTime, endTime;
	printf("STRlength\tROTATEdistance\tT.trivial\tT.juggle\tT.bw\tT.reverse\n");
	while (1)
	{
		if (gendata() == 0)
			break;
		else
		{
			char *tstr = (char*)malloc(sizeof(char)*(n + 1));
			strcpy(tstr, str);
			startTime = clock();
			trivial(tstr);
			endTime = clock();
			time1 = (double)(endTime - startTime) / CLOCKS_PER_SEC;
			startTime = clock();
			juggling(tstr);
			endTime = clock();
			time2 = (double)(endTime - startTime) / CLOCKS_PER_SEC;
			startTime = clock();
			//bw 함수 넣기
			endTime = clock();
			time3 = (double)(endTime - startTime) / CLOCKS_PER_SEC;
			startTime = clock();
			reversal(tstr);
			endTime = clock();
			time4 = (double)(endTime - startTime) / CLOCKS_PER_SEC;
			printf("%d\t\t%d\t\t%lf\t%lf\t%lf\t%lf\n", n, (n - d), time1, time2, time3, time4);
			free(tstr);
		}
	}
	return 0;
}