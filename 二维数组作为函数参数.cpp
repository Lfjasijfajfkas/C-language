#include<stdio.h>

//定义 一个按行输出二维数组所有元素的 函数
//实现此功能
#define M 5
#define N 6
void output(int b[M][N]);
int main()
{
	int arr[M][N]={{1,2},{3,6}};
	output(arr);
	return 0;
}

void output(int b[M][N])
{
	int i=0;
	int j=0;
	 for(i=0;i<M;i++)
	 {
		 for(j=0;j<N;j++)
		 {
			 printf("%d\t",b[i][j]);
		 
		}
	 printf("\n");
	 }
}