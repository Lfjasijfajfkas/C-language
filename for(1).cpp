#include<stdio.h>
//int main()
//{
//	int i=0;
//	for(i=1;i<=10;i++)
//	{
//	    if(i==5)
//			continue;//����������䣬�ص��������
//		printf("%d ",i);//1~10û��5
//	}
//    return 0;
//}

int main()
{
	int i=0;
	for(i=1;i<=10;i++)
	{
	    if(i==5)//����ǧ��Ҫд��i=5��i��ֵ���ĳ�5��
			break;
		printf("%d ",i);//1234
	}
    return 0;
}