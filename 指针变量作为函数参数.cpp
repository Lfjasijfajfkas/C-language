
#include<stdio.h>


//交换两个函数的值
void fun(int *x,int *y);

int main()
{
	int a;
	int b;
	scanf("%d %d",&a,&b);
	fun(&a,&b);
	
	printf("%d %d\n",a,b);
	
	return 0 ;
}

void fun(int *x,int *y)
{
	int temp=0;
	temp=*x;
	*x=*y;
	*y=temp;

}
