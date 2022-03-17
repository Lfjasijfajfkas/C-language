#include<stdio.h>
//int main()
//{
//  int i=1;
//	while(i<=10)
//	{
//		printf("%d\n",i);
//	i++;
//	
//	}
//	
//	return 0;
//}


//int main()
//{
//  int i=1;
//	while(i<=10)
//	{
//		printf("%d\n",i);//1,2,3,4
//	i++;
//	if(i==5)
//		break;//终止所有循环
//	
//	}
//	
//	return 0;
//}

//int main()
//{
//	int i=1;
//	while(i<=10)
//	{
//		if(i==5)//1,2,3,4都不符合条件，不进入if语句，往后走打印
//		continue;//当i==5时，进入continue后，不再往下走,而是回到while判断，i不再改变，如此（死）循环
//		printf("%d\n",i);//1，2，3，4后死循环
//		i++;
//	}
//	
//	return 0;
//}

//int main()
//{
//	int i=0;
//	while(i<10)
//	{   
//		i++;
//		if(i==5)
//		continue;//i==5后跳过打印，回到条件判断
//		printf("%d\n",i);//1~10没有5
//	}
//	
//	return 0;
//}

int main()
{
	int ch=0;
	while(i<10)
	{   
		i++;
		if(i==5)
		continue;//i==5后跳过打印，回到条件判断
		printf("%d\n",i);//1~10没有5
	}
	
	return 0;
}