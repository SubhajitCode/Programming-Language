#include<stdio.h>
#include<math.h>
int count(int a)
{
	int count=0;
	while(a>0)
	{
		a=a/10;
		count++;
	}

return count;
	
	
}
void main()
{
	int a;
	printf("Please Enter a integer\n");
	scanf("%d",&a);
	printf("the number of digits in  %d is %d\n",a,count(a));
}
