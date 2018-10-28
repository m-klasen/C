#include <stdio.h>

int Matrix1[10][10], Matrix2[10][10],Matrix3[10][10];
int z,s,m,n,q,p,k,sum;

int main()
{
	printf("Matrix Muliplikation\n");

	printf("Eingabe der Spalten und Zeilen von Matrix1:\n");
	scanf("%d %d",&m,&n);

	printf("Eingeabe der Spalten und Zeilen von MAtrix2:\n");
	scanf("%d  %d",&q,&p);

	if (q != n){
	printf("Die eingegebenen Matrizen können nicht multipliziert werden\n");
    }
	else{

		printf("Eingabe Matrix 1:\n");
    for (z=0;z<m;z++){				//Matrix1 in array einlesen
    	for (s=0;s<n;s++){
    		scanf("%d", &Matrix1[z][s]);
    	}	
    }
	
		printf("Eingabe Matrix 2:\n");
		for (z=0;z<q;z++){					//matrix2 in array einlesen
			for (s=0;s<p;s++){
				scanf("%d",&Matrix2[z][s]);
			}
		}
	}


	for (z=0;z<m;z++)
	{
		for (s=0;s<q;s++)
		{
			for (k=0;k<p;k++)
			{
				sum += Matrix1[z][k] * Matrix2[k][s];
			}
		Matrix3[z][s] = sum;
		sum=0;	
		}
	}

	for (z=0;z<m;z++)
	{
		for (s=0;s<p;s++)
		{
			printf("\t%d\t",Matrix3[z][s] );
		}
	printf("\n");	
	}
	return 0;
}