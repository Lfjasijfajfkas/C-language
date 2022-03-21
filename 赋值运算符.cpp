#include<stdio.h>
//简单赋值运算符：=
//复合赋值运算符：+= -= *= /= %=
int main()
{
	int a =15;
	a +=5;//加后赋值:先加5后再赋值给a
	printf("%d\n",a);//20
	a -=5;
	printf("%d\n",a);//15
return 0;
}