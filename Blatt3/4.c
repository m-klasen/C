#include <stdio.h>

float xperhand = 10033.71964;
float x1 = 10000;
float x2 = 0.9060939428;
float x3 = 135.9140914;
float x4 = -1.164977926;
float x5 = -101.9355686;

double y = 10000;
double y2 = 0.9060939428;
double y3 = 135.9140914;
double y4 = -1.164977926;
double y5 = -101.9355686;

float S=0;
float D=0;
float S2;

float x[5] = { 10000 , 0.9060939428, 135.9140914, -1.164977926, -101.9355686 };

int main()
{
	int i;
	//printf("Per Hand:%.6f\n", xperhand);
	printf("Float: %.6f\n", x1+x2+x3+x4+x5);
	printf("Double: %.6f\n", y+y2+y3+y4+y5);

	for (i = 0; i < 5; ++i)
	{
		S2 = S;
	    S = S + x[i];
	    D = D + (x[i]-(S-S2));
	}
	printf("%f\n", S);
	printf("%f\n", D);
	printf("%f\n", S+D);

	return 0;
}