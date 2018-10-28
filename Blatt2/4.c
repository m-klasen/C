#include	<stdio.h>


int main()
{
	int i,x;
	for (i = 1; i <= 10; ++i)
	{
		for (x = 1; x <= 10; ++x)
		{
			printf("%d * %d =%d\n",i,x,i*x );
		}
	}
	return 0;
}