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

int main(int argc, char const *argv[])
{
	int n;

	printf("Fakul eingabe\n");
	scanf("%d", &n);
	printf("%d\n", fakul(n));
	return 0;
}
