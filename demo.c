
#include<stdio.h>

int sum(int a,int b)
{
	int c = 0;
	return c = a+b;//master所做的修改
}
int main()
{
	int a = 0;
	a = sum;//version1所做的修改
	printf("%d\n",a);
	return 0;
}
