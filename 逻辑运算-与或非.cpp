#include<stdio.h>
int main()
{
	int a = 10;
	int b =5;
	printf("%d\n",a>b && a<b);//1 && 0
	printf("%d\n",a>b && a!=b);//1 && 1
	printf("%d\n",a && b);//a=10��0Ϊ��,b=5��0Ϊ��
	printf("%d\n",a<10 && b++);//�߼�����ж�·���ԣ�A && B�����ǰ���AΪ�٣�&&�϶�Ϊ�٣���B�������У���b++������
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
	printf("%d\n", a!=5 || b++ );//���߼�Ҳ���ж�·���ԣ�A || B�����ǰ���AΪ�棨&&�϶�Ϊ�棩��B�������У���b++������
	printf("%d\n",b);//5�������a!=5 || b++��b=6
return 0;
}


//�߼��ǣ���ʹ���ʽ��ֵ�ɼٱ��棬���٣���Ŀ�����
int main()
{
	int a = 10;
	int b =5;
	printf("%d\n",!(a>b));//0
	printf("%d\n",!(a<b));//1
	printf("%d\n",!a);//0
	printf("%d\n",!a>b);//�������ȼ�����>������!a��0>b�Ǽٵ�
return 0;
}
