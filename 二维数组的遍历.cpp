#include<stdio.h>

//����������ĳ������·�ߣ����ζԶ�ά�����е�ÿ��Ԫ����һ�߷���
//��ά�����еı�����Ϊ ���б��� �� ���б��� ����

#define M 3
#define N 4

//���б���

/*
int main()
{
	int arr[M][N]={{1,2,3,4},{1,2,3,4,},{1,2,3,4}};
	int i=0;
	int j=0;
	 for(i=0;i<M;i++)
	 {
		 for(j=0;j<N;j++)
		 {
			 printf("%d\n",arr[i][j]);
		 
		}
	 printf("\n");
	 }
	return 0;
}
*/

//���б���

int main()
{
	int arr[M][N]={{1,2,3,4},{1,2,3,4,},{1,2,3,4}};
	int i=0;
	int j=0;
	 for(j=0;j<N;j++)
	 {
		 for(i=0;i<M;i++)
		 {
			 printf("%d\t",arr[i][j]);
		 }
		 printf("\n");
	 }
	return 0;
}
