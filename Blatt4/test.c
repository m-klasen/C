#include <stdio.h>

int ggt(int a, int b)
{
	int c;
	if (a<b)
	{
		c = a;
		a = b;
		b = c;
	}
	while (b>0)
	{
	c = a%b;
	a = b;
	b = c;
	}
	return a;
}

int phi(int n)
{
	int i,x=1;
  	for (i=2;i<n;i++)
  	{
  		if (ggt(i, n) == 1)
  		{
  			x++;
  		}
  	}
  	return x;
}

int main()
{
int n,a;
scanf("%d", &a);
printf("phi(a) = %d\n", phi(a));
}