#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n = 1;
	int i, j;
	for(i = 1; i <= 5; i++)
	{
		for(j = 1; j <= n; j++)
		{
			printf("*");
		}
		printf("\n");
		n++;
	}
}
