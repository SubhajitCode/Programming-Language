#include<stdio.h>
#include<math.h>
void print3(int a,int b)
{
	printf("printing integers divisable by 3 in between %d and %d -----------------------\n",a,b);
	int temp;
	if(a>b)
	{
		temp=a;
		a=b;
		b=temp;
	}
	int i;
	for (i=a;i<=b;i++)
	{
		if((i%3)==0)
		{
			printf("%d ",i);
		}
	}
printf("\n");
	
	
}
void main()
{
	int a,b;
	printf("Please Enter two integers\n");
	scanf("%d%d",&a,&b);
	print3(a,b);
}
