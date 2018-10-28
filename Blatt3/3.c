#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const char *worte1[] = 
					{"ein", "zwei", "drei", "vier"
					, "fünf", "sechs", "sieben", "acht", "neun"};
const char *worte2[] =
					{"", "zwanzig", "dreizig", "vierzig", "fünzig", "sechszig"};


int main()
{

int x,i;
printf("Eingabe Zahl(21-69):\n");
scanf("%d", &x);


printf("%s-und-%s\n",worte1[x%10-1],worte2[x/10-1] ); 
 // worte array -1 weil arrays mit 0 anstatt 1 beginnt
	return 0;
}