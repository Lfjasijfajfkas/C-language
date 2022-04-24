#include<stdio.h>

#if 0
int main()
{
	int a[5]={9,19,29,39,49};
	int *p;
	

	printf("%d\n",a);
	printf("%d\n",a+1);
	printf("%d\n",a+2);
	printf("%d\n",a+3);
	printf("%d\n",a+4);

	printf("\n\n");

    p=a;//相当于p=&a[0]
	printf("%d\n",p);
	printf("%d\n",p+1);
	printf("%d\n",p+2);
	printf("%d\n",p+3);
	printf("%d\n",p+4);

	printf("\n\n");

	printf("%d\n",*p);
	printf("%d\n",*(p+1));
	printf("%d\n",*(p+2));
	printf("%d\n",*(p+3));
	printf("%d\n",*(p+4));

	printf("\n\n");

	p=&a[2];
	printf("%d\n",a[0]);
	printf("%d\n",p[0]);
	printf("%d\n",p[1]);
	printf("%d\n",p[2]);
	printf("%d\n",p[3]);//随机值
	printf("%d\n",p[4]);//


	return 0;

}
#endif


#if 0
int main()
{
	int a[5]={9,19,29,39,49};
	int *p;

	p=&a[2];
	printf("%d\n",p[0]);//a[2]
	printf("%d\n",p[1]);//a[3]

	p=a;
	printf("%d\n",*p);
	p++;//p=p+1
	printf("%d\n",*p);//a[1]
	printf("%d\n",*a);//a[0]
	
	return 0;
}
#endif

int main()
{
	int a[5]={9,19,29,39,49};
	int *p;

	p=&a[2];
	printf("%d\n",p[0]);//a[2]
	printf("%d\n",p[1]);//a[3]

	p=a;
	printf("%d\n",*p);
	p++;//p=p+1
	printf("%d\n",*p);//a[1]
	printf("%d\n",*p++);
	printf("%d\n",*p);
	return 0;
}
