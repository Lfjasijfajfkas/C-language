#include<stdio.h>

/*
typedef int ZX;//��define��ͬ������Ҫ���ֺ�
int main()
{
	ZX a=9;
	printf("%d\n",a);
	return 0;
}
*/


//typedef����ڽṹ����ʹ�ã�

//����ṹ�壨ʹ��typedef��������ѧ������Ϣ�����������ſεĳɼ�������ƽ���֣����Ӽ���������ѧ������Ϣ������ƽ����


#define SIZE 3
typedef struct student
{
	char name[5];
	int score[3];
	double ave;
}STU;//STU�ǽṹ��ı�����Ҫ��û��typedef��STU������Ǳ�����
int main()
{
	int i=0;
	int sum=0;
	STU b1;
	printf("ѧ����������");
	scanf("%s",&b1.name );
	for(i=0;i<3;i++)
	{
		printf("�������%d�ųɼ���",i+1);
		scanf("%d",&b1.score [i]);//������ȡ��ַ���ţ�
		sum=sum+b1.score [i];
	}
	b1.ave =sum/SIZE;
	printf("ƽ���֣�%lf\n",b1.ave );
	
	return 0;
}