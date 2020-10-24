#include<stdio.h>
#include<stdlib.h>
#define N 9

int main()
{
	int x = 0;
	int i, j;
	for(i = 1; i <= N; i++)
	{
		for(j = 1; j <= N; j++)
		{
			x = i * j;
			printf("%d\n", x);
		}
	}
}
