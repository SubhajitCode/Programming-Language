#include<stdio.h>
#include<math.h>
int distance(int a,int b)
{
	return(abs(a-b));

	
	
}
void main()
{
	int a,b,c,d;
	printf("Please Enter The value of a b c d\n");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	printf("distance between a and b is = %d and c and d is =%d\n",distance(a,b),distance(c,d));
}
