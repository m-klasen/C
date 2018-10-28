#include <stdio.h>

int a,z,n;
int i=1;

int pot(a,n)
{
	while(n%2==0) {
		i*= a;
		n= n/2;
		z++;
		}
	return i;
	while(n&2!=0) {
		i*=a;
		n= (n-1)/2;
		z++;
		}
}

int main()
{
	pot(a,17);
	printf("%d\n", z);
}
