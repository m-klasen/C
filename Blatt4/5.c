#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void initializegenerator() {
srand(time(NULL));
}
int randbetrag() {
	int x=0;
	x = rand() % 100+1;
	return x;
}


int main(int argc, char const *argv[])
{
	int i,x,y,diff;
	initializegenerator();

	x=randbetrag();
	printf("%d\n", x);
	printf("Geben sie >Zahl ein:\n");
	scanf("%d", &y);
	diff=y-x;

	for (diff;diff>=50; diff)
	{
		printf("%d\n", 50);
				diff-=50;
	}
	for (diff;diff>=20; diff)
	{
		printf("%d\n", 20);
				diff-=20;
	}
	for (diff;diff>=10; diff)
	
{		printf("%d\n", 10);
				diff-=10;
	}
	for (diff;diff>=5; diff)
	{
		printf("%d\n", 5);
				diff-=5;
	}
	for (diff;diff>=2; diff)
	{
		printf("%d\n", 2);
				diff-=2;
	}
	return 0;
}