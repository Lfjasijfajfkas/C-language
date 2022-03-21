#include<stdio.h>
int main()
{
	int i =1;
	int n =0;
	printf("请依次输入n的值：");
	scanf("%d",&n);
		do
		{
		printf("%d\n",i);
		i++;
		}
		while(i<=n);

return 0;
}
