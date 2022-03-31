#include<stdio.h>

//遍历：沿着某点搜索路线，依次对二维数组中的每个元素做一边访问
//二维数组中的遍历分为 按行遍历 和 按列遍历 两种

#define M 3
#define N 4

//按行遍历

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

//按列遍历

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
