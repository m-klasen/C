#include <stdio.h>
#include <math.h>

unsigned long mersenne(int n)
{
	return pow(2,n)-1;
}

unsigned long llt(int n)
{
	unsigned long i,x,s,k=4;
	x = k;						// S(1)= 4
	for (i = 2; i <n; i++)
	{
		s = pow(x,2)-2;			// S(n)= k^2-2
		x = s % mersenne(n);	// S(n)= % 2^n-1
	}
	return x;
}


int main()
{
	int i;
	for (i = 3; i <= 31; ++i)
	{
		if (llt(i)== 0)
		{
		printf("M = %d\n", i);
		}

	}
	return 0;
}