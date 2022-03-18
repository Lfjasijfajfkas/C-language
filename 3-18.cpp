#include<stdio.h>
//int main()
//{
	//int ch=0;//这里是int
	//while((ch=getchar())!=EOF)//输入字符赋给ch
	//{
	//putchar(ch);//输出ch
	//}
//return 0;
//}


//int main()
//{
//	char password[20]={0};//注意这里是大括号
//	int ret=0;
//	printf("请输入密码\n");
//	scanf("%s",password);//数组就是地址，不需要加取地址符号&
//    //敲下回车键后，缓冲区剩余一个\n(回车)会直接被下一个getchar读走
//	getchar();
//	printf("请确认（Y/N）\n");
//		ret=getchar();
//		if(ret=='Y')
//		{
//			printf("确认成功\n");
//		}
//		else
//		{
//			printf("放弃确认\n");
//		}
//return 0;
//}


//int main()
//	{
//	char password[20]={0};
//	char ch=0;
//	printf("请输入密码\n");
//	scanf("%s",password);
//	printf("请确认（Y/N）\n");
//		scanf("%c\n",&ch);
//		if(ch=='Y')
//		{
//			printf("确认成功\n");
//		}
//		else
//		{
//			printf("放弃确认\n");
//		}
//return 0;
//}


//int main()
//{
//	int ch=0;
//	while((ch=getchar())!=EOF)
//	{
//	if(ch<'0'||ch>'9')
//		continue;
//	putchar(ch);
//	}
//
//	return 0;
//}