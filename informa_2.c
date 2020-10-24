#include<stdio.h>
#include<stdlib.h>
#define len 6

int main()
{
	int n = len - 1;
	int tmp;
	int a[] = {2, 6, 3, 8, 1, 10};

	while(n > 0)
	{
		if(a[n] > a[n-1])
		{
			tmp = a[n-1];
			a[n-1] = a[n];
			a[n] = tmp;
		}	
		n--;
	}

	for(n = 0; n < len; n++)
	{
		printf("%d\n", a[n]);
	}	
}
