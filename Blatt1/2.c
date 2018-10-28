#include <stdio.h>

int main()
{
	int zahl,summe;
	scanf("%d",&zahl);
	while(zahl>0) {
	    summe=summe+zahl;
	    zahl--;
	}
	printf("%d\n",summe);
	return 0;
}