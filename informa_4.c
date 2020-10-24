#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n = 1;
	int k = 1;
	float row = 39.0;
	int i, j;

	printf("row?:");
	scanf("%f", &row);

	for(i = 1; i <= row; i++)
	{
		for(j = 1; j <= n; j++)
		{
			printf("*");
		}
		printf("\n");
		if(k < (row+1)/2)
		{
			n++;
		}
		else
		{
			n--;
		}
		k++;
	}
}
