#include<stdio.h>
#include<math.h>
float func(float x[],int n)
{
    int i;
    float result=0;
    for(i=0;i<n;i++)
    {
        result=result+x[i]*x[i+1];
    }
    return result;
}
float func2(float x[],int n,int k)
{
    int i;
    float result=0;
    for(i=0;i<n;i++)
    {
        result=result+x[i]*((float) k+i);
    }
    return result;
}
void func5(float x[],float y[],int n)
{
    int i;
    float result=0;
    for(i=0;i<n;i++)
    {
        y[i]=x[i]+1;
    }
}
void func6(int array[],int n)
{
    int flag=0;
    int temp=array[0];
    int i;
    for(i=1;i<n;i++)
    {
        if(temp!=array[i])
        {
            temp=array[i];
            flag=1;
            break;

        }
        
    }
    if(flag==1)

        printf("\nNon Repeting Element is:%d\n",temp);
    else
        printf("\nAll Repeting element\n");

}
void main()
{
    int n=5;
    int i=0;
    float array[]={1,2,3.5,4.5,5.6};
    int array6[]={5,5,5,5,5,6,5};
    printf("Result of function:1 is : %f \n",func(array,n));
    printf("Result of function:2 is : %f \n",func2(array,n,6));
    float y[n];
    func5(array,y,n);
    for(i=0;i<n;i++)
    {
        printf("%f ",y[i]);
    }
    func6(array6,7);


}