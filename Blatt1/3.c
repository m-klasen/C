#include <stdio.h>



int main()
{
	int zahl;
	int i;
	int x;
	scanf("%d",&zahl);
	for (i = 2; i <= zahl; i++)
	{
		if (zahl%i==0)
		{
			printf("%d ist keine Primzahl\n", zahl);
			break;
		}
			
	}
	if (zahl==i)
	{
		printf("%d ist eine Primzahl\n", zahl);
	}	

	if (zahl>=0)		
	{
		printf("%d ist eine Positive Zahl\n", zahl);
	}
	if (zahl<0)
	{
		printf("%d ist eine Negative Zahl\n", zahl);
	}

	return 0;
}