#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void initializegenerator() {
srand(time(NULL));
}
int karteziehen() {
	int x=0;
	x = rand() % 8 + 2;
	return x;
}

int main()
{
int x,y;
int z;

printf("Blackjack\n");
initializegenerator();

y=karteziehen();
printf("Dealer: %d\n", y);

x=karteziehen(); 
printf("spieler: %d\n", x);

while (x<21 && y<16)
{
	
	printf("karte ziehen? (1/0): ");
	scanf("%d", &z);
	if (z == 1)
	{
		x+=karteziehen();
		printf("Dealer: %d\n", y);
		printf("Spieler:%d\n\n", x);
	}
	if (z == 0)
	{
		while (y<16){
		y+=karteziehen();
		printf("Dealer: %d\n", y);
		printf("Spieler:%d\n\n", x);
	}
	}
	
}
if ((y<22 && x>21) || (y>x && x<22 && y<22))
{
	printf("Dealer won.\n");
}

else if (y == x)
{
	printf("Draw.\n");
}	
else if ((y>21 && x<22) || (y<x && x<22))
{
	printf("Spieler won.\n");
}

return 0;
}