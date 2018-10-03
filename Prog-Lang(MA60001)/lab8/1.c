#include<stdio.h>
void fib(unsigned long int array[],int n)
{
    int i;
    array[0]=0;
    array[1]=1;
    for(i=2;i<=n;i++)
    {
        array[i]=array[i-1]+array[i-2];
    }
}
void main()
{
    int n=100;
    unsigned long int array[n+1],result=0;
    int i;  
    fib(array,n);
    for (i=0;i<=n;i++)
        result=result+array[i];
    printf("%lu \n",result);
}