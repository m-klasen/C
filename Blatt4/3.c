#include <stdio.h>
#include <math.h>

#define M_PI 3.14159265358979323846

int fakul(int x)
{

	if (x>1)
	{
		return x*fakul(x-1);
	}
	else if (x== 0)
	{
		return 1;
	}
	else 
	{
		return x;
	}
}re(y)));
	}

double cosfunc(double x)
{
	double a=0;
	double n=0;
	for (n=0;n<=5; ++n)
	{
		a += pow(-1,n)*(pow(x,2*n))/(fakul(2*n));
	}
	return a;
}

double sinfunc(double x)
{
	double a=0;
	double n=0;
	for (n=0;n<=5;++n)
	{
		a += pow(-1,n)*(pow(x,2*n+1))/(fakul(2*n+1));
	}
	return a;
}


double expfunc(double x)
{
	double a=0;
	double n=0;
	for (n=0;n<=10;++n)
	{
	
		a += pow(x,n)/(fakul(n));

	}
	return a;
}


void main()
{
	printf("%f\n", cosfunc(M_PI/4));
	printf("%f\n", sinfunc(M_PI/4));
	printf("%f\n", sinfunc(M_PI/2));
	printf("%f\n", cosfunc(M_PI/2));
	printf("%f\n", expfunc(1));
}