#include<stdio.h>
#include<math.h>
float calculate(int a,int b, int c)
{
	int s;
	s=(a+b+c)/2;
	float area;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	return area;

	
	
}
void main()
{
	int a,b,c;
	printf("Please Enter The value of a b c \n");
	scanf("%d%d%d",&a,&b,&c);
	printf("area of the trangele of sides %d , %d, %d is =%f\n",a,b,c,calculate(a,b,c));
}
