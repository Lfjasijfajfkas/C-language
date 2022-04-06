#include<stdio.h>

/*
typedef int ZX;//与define不同，后面要带分号
int main()
{
	ZX a=9;
	printf("%d\n",a);
	return 0;
}
*/


//typedef如何在结构体中使用？

//定义结构体（使用typedef），包含学生的信息（姓名，三门课的成绩、计算平均分），从键盘上输入学生的信息，计算平均分


#define SIZE 3
typedef struct student
{
	char name[5];
	int score[3];
	double ave;
}STU;//STU是结构体的别名，要是没有typedef，STU放这就是变量了
int main()
{
	int i=0;
	int sum=0;
	STU b1;
	printf("学生的姓名：");
	scanf("%s",&b1.name );
	for(i=0;i<3;i++)
	{
		printf("请输入第%d门成绩：",i+1);
		scanf("%d",&b1.score [i]);//别忘了取地址符号！
		sum=sum+b1.score [i];
	}
	b1.ave =sum/SIZE;
	printf("平均分：%lf\n",b1.ave );
	
	return 0;
}