#include<stdio.h>


//定义结构体包括学生的名称、序号、C语言成绩、平均分
/*
//方法一：先声明类型，后定义变量
struct student 
{
	char name[10];
	int num;
	int Cscore;
	double ave;
};

int main()
{
	struct student b1={"Tom",16,90,69.5};//一一赋值
	
	printf("学生姓名：%s\n",b1.name  );
	printf("学号：%d\n",b1.num );
	printf("C语言成绩：%d\n",b1.Cscore );
	printf("平均分：%f\n",b1.ave );

	b1.Cscore =59;//在外边单独赋值
	              //b1.Cscore是一个整体
	printf("修改后的C语言成绩：%d\n",b1.Cscore);

	return 0;
}
*/


/*
//方法二：在声明类型的同时定义变量
struct student 
{
	char name[10];
	int num;
	int Cscore;
	double ave;
}Jack,Rose;//多个变量用逗号隔开
int main()
{
	return 0;
}
*/

//方法三：省略结构体名，直接定义结构体变量
//只能定义一次，接下来不能再定义结构体变量了

