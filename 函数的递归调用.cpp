#include<stdio.h>

/*
//调用不同函数

int fac(int n);
int main()
{
	int a=0;
	scanf("%d",&a);
	printf("%d\n",fac(a));
	return 0;
}
//函数的功能：求n的阶乘,(n>1)
int fac(int n)
{
	int i=0;
	if(n<0)
	{
		return -1;
	}
	else
	{for(i=1;i<=n;i++)
	{
	sum=sum*i;
	}
	return sum;
	}
}
*/


//函数的递归调用
int fac(int n);
int main()
{
	int a=0;
	printf("请输入a的值：");
	scanf("%d",&a);
	printf("a的阶乘为：%d\n",fac(a));
	return 0;
}

//函数的功能：求n的阶乘
int fac(int n)
{

	if(n<0)
		return -1;
	else if(n==1)
		return 1;
	else
	return n*fac(n-1);
	
}