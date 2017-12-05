#include "header.h"

int gendata()
{
	printf("Array length = ");
	scanf("%d", &n);
	if (n == EOF)
		return 0;
	else
	{
		printf("Rotate position = ");
		scanf("%d", &d);
		d = countdistance(-d);
		str = (char *)malloc(sizeof(char)*(n + 1));
		strgen();
		
		return 1;
	}
}
void strgen()
{
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		str[i] = ((rand() % 26) + 'a');
	str[n] = NULL;
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
int countdistance(int d)
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
void trivial(char *str)
{
	int k = 0;
	char *temp = (char *)malloc(sizeof(char)*(n + 1));
	for (k = 0; k < d; k++)
		temp[k] = str[k];
	for (k = d; k < n; k++)
		str[k - d] = str[k];
	for (k = 0; k < d; k++)
		str[k + n - d] = temp[k];
} 
int gcd(int a, int b)
{
	if (b == 0)
		return a;
	else
		return gcd(b, a%b);
}
void juggling(char *str)
{
	int i, j, k;
	for (i = 0; i < gcd(d, n); i++)
	{
		char temp = *(str + i);
		j = i;
		while (1)
		{
			k = j + d;
			if (k >= n)
				k = k - n;
			if (k == i)
				break;
			str[j] = str[k];
			j = k;
		}
		str[j] = temp;
	}
}