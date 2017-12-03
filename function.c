#include "header.h"

int gendata()
{
	if (scanf("%d", &n) == EOF)
		return 0;
	else
	{
		scanf("%d", &d);
		str = (char *)malloc(sizeof(char)*(n + 1));
		for (int i = 0; i < n; i++)
			str[i] = i % 26 + 56;
		str[n] = "\0";
		return 1;
	}
}

void reverse(char *str, int x, int y)
{
	char temp;
	for (int i = 0; i < (y - x) / 2; i++)
	{
		temp = str[x + i];
		str[x + i] = str[y - i];
		str[y - i] = temp;
	}
}

void reversal(char *str)
{
	reverse(str, 0, d - 1);
	reverse(str, d - 1, n - 1);
	reverse(str, 0, n - 1);
}

void printvalue()
{
	printf("%d\t\t%d\t\t%lf\t%lf\t%lf\t%lf\n", n, d, time1, time2, time3, time4);
}