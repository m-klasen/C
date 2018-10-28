#include <stdio.h>
#include <math.h>

int pyth (int a,int b, int c)
{
	if (pow(a,2)+pow(b,2)==pow(c,2))
	{
		return 1;
	}
	else return 0;
}

int main(int argc, char const *argv[])
{
	int a=0;
	int b=0;
	int c=0;
	int x=0;

	printf("Limit:\n");
	scanf("%d", &x);
	for (a = 0; a < x; ++a)
	{
		for (b=1;b<x+1;++b)
		{
			for (c=2;c<x+2;++c)
			{
				if (a<b && b<c && pyth(a,b,c)==1)
				{
					printf("%d\t%d\t%d\n", a,b,c);
				}
			}
		}
	}
	return 0;
}