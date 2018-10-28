#include <stdio.h>

int succ(int x) {
return ++x;
}

int pre(int x) {
return --x;
}

int add(int x, int y)
{
	if (y>0)
	{
		return add(succ(x),pre(y));
	}
	else 
	{
		return x;
	}
}

int sub(int x, int y)
{
	if (y>0)
	{
		return sub(pre(x),pre(y));
	}
	else 
	{
		return x;
	}
}

int mult(int x, int y)
{
	if (y>0)
	{
		return add(x,mult(x,pre(y)));
	}
	else
	{
		return x;
	}
}

int main()
{
	int a=2,b=1;
	int c=5,d=8;
	int e=5,f=4;
	printf("%d\n", add(a,b));
	printf("%d\n", sub(c,d));
	printf("%d\n", mult(e,f));
	return 0;
}