#include <stdio.h>

int fakul(int x)
{

	if (x>1)
	{
		return x*fakul(x-1);
	}
	else if (x== 0)
	{
		return 1;
	}
	else 
	{
		return x;
	}
}

int binom(int n,int k)
{
	if (k>n)
	{
		return 0;
	}
	else 
	{
		return fakul(n)/(fakul(k)*fakul(n-k));
	}
}

int main(int argc, char const *argv[])
{
	int a,b;

	printf("n über k eingeben\n");
	scanf("%d", &a);
	scanf("%d", &b);
	printf("%d\n", binom(a,b));
	return 0;
}
