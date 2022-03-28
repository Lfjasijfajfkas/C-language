/*
#include<stdio.h>

#define SIZE 5 //没有分号
int main()
{
	int a0,a1,a2,a3,a4;//a0~a4在内存中的存储空间是不连续的
	int arr[SIZE];//
	printf("%d\n",sizeof(arr));//输出数组arr占据的字节数：5*4=20
	printf("%d\n",sizeof(arr[SIZE]));//4
	printf("%d\n",sizeof(int));//4
	printf("%d\n",sizeof(arr)/sizeof(int));//计算数组的长度

	return 0;
}
*/
