#include <stdio.h>
#include <math.h>

int i,z;
int a=1;

int pot(a,n)
{
	while(n>0) {
	   i= a*i;
	   n= n-1;
	   z++;
		}
	return i;	
}

int main()
{
	pot(a,17);
	printf("%d\n", z);
}

