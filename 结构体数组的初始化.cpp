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
	STU class3[3]={{"Jack",75,69.5},{"Rose",85,69.5},{"Mary",98,69.5}};//class3�ǽṹ�������������鳤��Ϊ50
	printf("Rose�ķ�����%d\n",class3[1].score );
	return 0;
}
*/


//��N��ѧ������Ϣ���������֡�ѧ�š��ɼ������ҳ��ɼ���ߵ�ѧ�����������ѧ������Ϣ
#define N 3
typedef struct student
{
	char name[10];
	int num;
	int score;
}STU;
int main()
{	
	STU class3[3]={{"Jack",04,68},{"Rose",10,85},{"Mary",21,100}};//class3�ǽṹ�������������鳤��Ϊ50
	int i=0;
	int max=0;//max���������߷ֶ�Ӧ�Ľṹ��Ԫ���±�
	for(i=1;i<N;i++)
	{
		if(class3[i].score>class3[max].score );//�տ�ʼmax=0
		{
			max=i;
		}
	}
	printf("�ɼ���ߵ�ѧ���ǣ�%s\nѧ��Ϊ��%d\n�ɼ�Ϊ:%d\n",class3[max].name, class3[max].num, class3[max].score);
	return 0;
}