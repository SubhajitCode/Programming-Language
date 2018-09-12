#include<stdio.h>
int calculate(int a,int b, int c,int x)
{

	return((a*x*x)+(b*x)+c);
	
}
void main()
{
	int a,b,c;
	printf("Please Enter The value of a b c \n");
	scanf("%d%d%d",&a,&b,&c);
	int n=10,i;
	for(i=0;i<n;i++)
	{
		printf("The value of f(%d)= %d \n",i,calculate(a,b,c,i));
	}
}
