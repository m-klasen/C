#include <stdio.h>	

int zahl;
int teiler;
int summe;

int main(int i)
{
	scanf("%d", &zahl);
    for ( i = zahl; i > 0; --i)
    {
    	for ( teiler = 2; (teiler*teiler) < zahl; teiler++);
    	{
    		if (zahl % teiler == 0)
    		{
    			summe += (zahl/teiler);
    		}
     	}
    }
if (summe < zahl)
            {
                printf("Die eingegebene Zahl ist eine defiziente Zahl\n");
            } 
if (summe >= zahl)
               {
                printf("Die eingegebene Zahl ist keine defiziente Zahl\n");
               }               
}