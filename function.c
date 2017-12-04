#include "header.h"

int gendata()
{
	if (scanf("%d", &n) == EOF)
		return 0;
	else
	{
		scanf("%d", &d);
		str = (char *)malloc(sizeof(char)*(n + 1));
		scanf("%s", str);
		printf("String Entered : %s\n", str);
		return 1;
	}
}

void reverse(char *str, int start, int end)
{
	char temp;
	int term = end - start;
	if (!term);
	else
		term++;
	for (int i = 0; i < term / 2; i++)
	{
		temp = *(str + start + i);
		*(str + start + i) = *(str + end - i);
		*(str + end - i) = temp;
	}
}

void reversal(char *str)
{
	reverse(str, 0, d - 1);
	reverse(str, d, n - 1);
	reverse(str, 0, n - 1);
}

void printvalue()
{
	printf("%d\t\t%d\t\t%lf\t%lf\t%lf\t%lf\n", n, d, time1, time2, time3, time4);
}

int countdistance(int d, int n)
{
	if (d < 0)
	{
		while (!(d > 0 && d < n))
			d += n;
	}
	else if (d > n)
	{
		while (!(d > 0 && d < n))
			d -= n;
	}
	return d;
}

void trivial(char *str, int d, int n)
{
     int k = 0;
     char temp[20];
	
     for (k = 0 ; k < d ; k++)
          temp[k] = str[k];
     for (k = d ; k < n ; k++)
          str[k-d] = str[k];
     for (k = 0 ; k < d ; k++)
          str[k + n - d] = temp[k];
     for (k = 0 ; k < n ; k++)
          printf("%c ", str[k]);
}
