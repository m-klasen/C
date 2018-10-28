#include <stdio.h>

int main()
{
	int x,y=2;

	printf("Zahl >=2 eingeben:\n");
	scanf("%d", &x);

	while (x%y!=0)
	{
		y++;
	}

	while (x%y==0)
	{
		x=x/y;
		printf("%d\n", y);

		while (x%y!=0)
		{
			y++;
		}
 
	if (x==y)
	{
		printf("%d\n", x);
		return 0;
	}

	}

return 0;
}