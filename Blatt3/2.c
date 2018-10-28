#include <stdio.h>

int main(int argc, char const *argv[])
{
int i,x,z;
printf("Artihmetisches Mittel \nEingaben: (n)\n");
scanf("%d", &z);			//anzahl einzulesender zahlen
double sum,array[z];

printf("%d Zahlen eingeben:\n", z);

for (i = 1; i <= z; i++)  
{
	scanf("%d", &x);
	array[i]= x;			// array speichern
	sum += array[i];		// array-inhalt summe
}

printf("%f\n", sum/z);
	return 0;
}