
#include<stdio.h>

int sum(int a,int b)
{
	int c = 0;//在master上添加的注释
	return c = a+b;//在master所做的修改
}
int main()
{
	int a = 0;
	a = sum;//version1所做的修改
	printf("%d\n",a);
	return 0;
}
