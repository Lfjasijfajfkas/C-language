#include<stdio.h>

#define SIZE 6
int main()
{
	int arr[SIZE]={1,2,3,4,5,6};
	//输出数组里的所有数值

	////方法一
	//
	//printf("%d\n",arr[0]);
	//printf("%d\n",arr[1]);
	//printf("%d\n",arr[2]);
	//printf("%d\n",arr[3]);
	//printf("%d\n",arr[4]);
	//printf("%d\n",arr[5]);
	

	////方法二：循环语句
	//
	//int i=0;
	//for(i=0;i<SIZE;i++)
	//{
	//	printf("%d\n",arr[i]);
	//}
	

	//逆过来输出
//	int i=0;
//	for(i=SIZE-1;i>=0;i--)
//	{
//		printf("%d\n",arr[i]);
//	}
	
	//顺序输入
	int i=0;
	for(i=0;i<SIZE;i++)
	{
		printf("请输入第%d个值\n",i+1);
		scanf("%d",&arr[i]);
	}
	return 0;
}

