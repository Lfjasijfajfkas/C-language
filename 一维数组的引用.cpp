#include<stdio.h>

#define SIZE 6
int main()
{
	int arr[SIZE]={1,2,3,4,5,6};
	//����������������ֵ

	////����һ
	//
	//printf("%d\n",arr[0]);
	//printf("%d\n",arr[1]);
	//printf("%d\n",arr[2]);
	//printf("%d\n",arr[3]);
	//printf("%d\n",arr[4]);
	//printf("%d\n",arr[5]);
	

	////��������ѭ�����
	//
	//int i=0;
	//for(i=0;i<SIZE;i++)
	//{
	//	printf("%d\n",arr[i]);
	//}
	

	//��������
//	int i=0;
//	for(i=SIZE-1;i>=0;i--)
//	{
//		printf("%d\n",arr[i]);
//	}
	
	//˳������
	int i=0;
	for(i=0;i<SIZE;i++)
	{
		printf("�������%d��ֵ\n",i+1);
		scanf("%d",&arr[i]);
	}
	return 0;
}

