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
		printf("�������%d�Ƴɼ�:",i+1);
		scanf("%d",&p->score[i]);
	}

	p=class5;//p=&class5[0]
	p->num =20;//class5[0].num =20;

	return 0;
}
#endif



//�Ӽ�������5��ͬѧ��ѧ�ż�3�ųɼ���ʹ�ýṹ��ָ��
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
	STU *p=class5;//�൱��p=&class5[0]
	for(i=0;i<N;i++)
	{
		printf("��%d��ͬѧ��ѧ��Ϊ:",i+1);
		scanf("%d",&p->num );
		for(j=0;j<M;j++)
		{
			printf("��%d�ųɼ�Ϊ��",j+1);
			scanf("%d",&p->score [j]);//ǧ��Ҫ����ȡ��ַ���ţ���������
			                            //��Ҫ���У���������
		}
		printf("\n");
		p++;
	}
	
	return 0;
}