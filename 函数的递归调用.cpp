#include<stdio.h>

/*
//���ò�ͬ����

int fac(int n);
int main()
{
	int a=0;
	scanf("%d",&a);
	printf("%d\n",fac(a));
	return 0;
}
//�����Ĺ��ܣ���n�Ľ׳�,(n>1)
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


//�����ĵݹ����
int fac(int n);
int main()
{
	int a=0;
	printf("������a��ֵ��");
	scanf("%d",&a);
	printf("a�Ľ׳�Ϊ��%d\n",fac(a));
	return 0;
}

//�����Ĺ��ܣ���n�Ľ׳�
int fac(int n)
{

	if(n<0)
		return -1;
	else if(n==1)
		return 1;
	else
	return n*fac(n-1);
	
}