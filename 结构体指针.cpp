#include<stdio.h>
#if 0
#define N 3
typedef struct student
{
	int num;
	int score[N];
}STU;
int main()
{
	STU Jack={18,{145,89,129}};
	STU class5[3];
	int i;
	STU *p=&Jack;
		for(i=0;i<N;i++)
	{
		printf("请输入第%d科成绩:",i+1);
		scanf("%d",&p->score[i]);
	}

	p=class5;//p=&class5[0]
	p->num =20;//class5[0].num =20;

	return 0;
}
#endif



//从键盘输入5个同学的学号及3门成绩，使用结构体指针
#define N 5
#define M 3
typedef struct student
{
	int num;
	int score[M];
}STU;
int main()
{
	STU class5[3]={0};
	int i=0;
	int j=0;
	STU *p=class5;//相当于p=&class5[0]
	for(i=0;i<N;i++)
	{
		printf("第%d个同学的学号为:",i+1);
		scanf("%d",&p->num );
		for(j=0;j<M;j++)
		{
			printf("第%d门成绩为：",j+1);
			scanf("%d",&p->score [j]);//千万不要忘了取地址符号！！！！！
			                            //不要换行！！！！！
		}
		printf("\n");
		p++;
	}
	
	return 0;
}