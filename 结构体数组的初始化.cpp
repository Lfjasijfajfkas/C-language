#include<stdio.h>
/*
typedef struct student
{
	char name[5];
	int score;
	double ave;
}STU;
int main()
{
	STU class3[3]={{"Jack",75,69.5},{"Rose",85,69.5},{"Mary",98,69.5}};//class3是结构体数组名，数组长度为50
	printf("Rose的分数：%d\n",class3[1].score );
	return 0;
}
*/


//有N个学生的信息（包括名字、学号、成绩），找出成绩最高的学生，并输出该学生的信息
#define N 3
typedef struct student
{
	char name[10];
	int num;
	int score;
}STU;
int main()
{	
	STU class3[3]={{"Jack",04,68},{"Rose",10,85},{"Mary",21,100}};//class3是结构体数组名，数组长度为50
	int i=0;
	int max=0;//max用来存放最高分对应的结构体元素下标
	for(i=1;i<N;i++)
	{
		if(class3[i].score>class3[max].score );//刚开始max=0
		{
			max=i;
		}
	}
	printf("成绩最高的学生是：%s\n学号为：%d\n成绩为:%d\n",class3[max].name, class3[max].num, class3[max].score);
	return 0;
}