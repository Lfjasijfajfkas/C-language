#include<stdio.h>
//定义结构体数组的方法

/*
//先声明，后定义
typedef struct student
{
	char name[5];
	int score[3];
	double ave;
}STU;
int main()
{
	int a[10];
	STU class3[50];//class3是结构体数组名，数组长度为50
	return 0;
}
*/

//声明类型的同时定义数组
struct student
{
	char name[5];
	int score[3];
	double ave;
}class3[50];
int main()
{
	return 0;
}
