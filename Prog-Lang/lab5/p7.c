#include<stdio.h>
#include<math.h>
int fact(int n)
{
	if (n==0)
	{
		return 1;
	}
	else if(n==1)
	{
		return 1;
	}
	else
	{
		return(n*fact(n-1));
	}
}
float sinn(float x);
float e(float x);
float my_ln(float x);
float my_inverse(float x);
float sinn(float x)
{
	float result=0;
	int i,n=10,j;
	for(i=0;i<n;i++)
	{
		j=(2*i+1);
		result=result+(pow(-1,i)*pow(x,j)/fact(j));

	}
	return(result);
}
float e(float x)
{
	float result=0;
	int i,n=10,j;
	for(i=0;i<n;i++)
	{
		
		result=result+(pow(x,i)/fact(i));

	}
	return(result);

}
float my_ln(float x)
{
	float result=0;
	int i,n=10,j;
	for(i=1;i<n;i++)
	{
		j=i;
		result = result+(pow(-1,i)*(pow((x-1),i)/(i)));
	}
	return result;



}
float my_inverse(float x)
{
	float result=0;
	int i,n=100,j;
	for(i=0;i<n;i++)
	{
		j=i;
		result = result+pow(((-1)*x),i);
	}
	return result;



}
void main()
{
	float x;
	printf("Please enter a number \n");
	scanf("%f",&x);
	printf("The sin(%f) = %f\n",x,sinn(x));
	printf("The e^(%f) = %f\n",x,e(x));
	printf("The ln(%f) = %f\n",x,my_ln(x));
	printf("The inverse(1+%f) = %f\n",x,my_inverse(x));
	
}

