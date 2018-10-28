#include "stdio.h"



long fib_rec(long n)
{
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else
		return (fib_rec(n-1))+(fib_rec(n-2));

}

int main(int argc, char const *argv[])
{
	long n;
	scanf("%ld", &n);
	for (int i = 0; i <= n; ++i)
	{
		printf("%ld\n", fib_rec(i));

	}
	
	return 0;
}