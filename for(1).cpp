#include<stdio.h>
//int main()
//{
//	int i=0;
//	for(i=1;i<=10;i++)
//	{
//	    if(i==5)
//			continue;//跳过后续语句，回到调整语句
//		printf("%d ",i);//1~10没有5
//	}
//    return 0;
//}

int main()
{
	int i=0;
	for(i=1;i<=10;i++)
	{
	    if(i==5)//这里千万不要写成i=5（i的值被改成5）
			break;
		printf("%d ",i);//1234
	}
    return 0;
}