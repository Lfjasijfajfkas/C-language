#include<stdio.h>
int main()
{
	int a = 10;
	int b =5;
	printf("%d\n",a>b && a<b);//1 && 0
	printf("%d\n",a>b && a!=b);//1 && 1
	printf("%d\n",a && b);//a=10非0为真,b=5非0为真
	printf("%d\n",a<10 && b++);//逻辑与具有短路特性：A && B，如果前面的A为假（&&肯定为假），B不会运行，即b++不成立
	printf("%d\n",b);//5
return 0;
}

int main()
{
	int a = 10;
	int b =5;
	printf("%d\n",a==b || a<b);//0 || 0
	printf("%d\n",a>b || a!=b);//1 || 1
	printf("%d\n",a || b);//1 || 1
	printf("%d\n", a!=5 || b++ );//或逻辑也具有短路特性：A || B，如果前面的A为真（&&肯定为真），B不会运行，即b++不成立
	printf("%d\n",b);//5，如果是a!=5 || b++，b=6
return 0;
}


//逻辑非！，使表达式的值由假变真，真变假，单目运算符
int main()
{
	int a = 10;
	int b =5;
	printf("%d\n",!(a>b));//0
	printf("%d\n",!(a<b));//1
	printf("%d\n",!a);//0
	printf("%d\n",!a>b);//！的优先级大于>，先算!a，0>b是假的
return 0;
}
