#include<stdio.h>
#include<math.h>
int slope(int a,int b)
{
	return(-(b/a));

	
	
}
void main()
{
	int a,b,c;
	printf("Please Enter The value of a b c in equation ax+by+c=0\n");
	scanf("%d%d%d",&a,&b,&c);
	printf("slope of the equation is %d\n",slope(a,b));
}
