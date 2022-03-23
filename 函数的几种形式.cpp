////难点：返回值类型和形参到底怎么确定？？？
////如果不需要返回 计算 的结果，则返回值类型为空
////如果不需要传数据过来参与 运算 ，则形参为空
//
//#include<stdio.h>
//
////一、无参数无返回值
//
////定义一个函数，输出1~10之间的数据
//void printfDate();
//int main()
//{
//	printfDate();
//    return 0;
//}
//
//void printfDate()
//{
//	int i=0;
//	for(i=1;i<=10;i++)
//	{
//	printf("%d\n",i);
//	}
//	return;
//}
//
//
////二、有参数无返回值
//
////输出1~n之间的数值，n由你来定义
//void printfn(int n);
//int main()
//{
//	int a=0;
//	printf("请输入n的值：");
//	scanf("%d",&a);
//	printfn(a);//把a的值传给n
//	return 0;
//}
//
//void printfn(int n)//需要传一个n值进来参与运算
//{
//	int i =0;
//	for(i=1;i<=n;i++)
//	{
//	printf("%d\n",i);
//	}
//	return;
//}
//
////有参数有返回值
////定义一个函数，计算1*2*3*...*n，并将结果返回给主调函数
////需要输入n值进行计算，需要返回值
//
//int sum(int n);
//int main()
//{
//	int a=0;
//	int su=0;
//	printf("请输入n的值：");
//	scanf("%d",&a);
//	su=sum(a);//重新定义一个新的变量，并将返回值赋给它
//	printf("%d\n",su);
//	return 0;
//}
//
//int sum(int n)
//{
//	int i=0;
//	int s=1;
//	for(i=1;i<=n;i++)
//	{
//	s=s*i;
//	}
//return s;
//}
