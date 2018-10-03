#include<stdio.h>
int find(int* array,int size,int number)
{
    int flag=-1,i;
    for(i=0;i<size;i++)
    {
        if(array[i]==number)
        {
            return i+1;
        }
        
    }
    if(flag==-1)
    {
        return -1;
    }

}
void main()
{
    int n,num;
    printf("Please Enter The Value of n\n");
    scanf("%d",&n);
    int i,array[n],index;
    printf("Please Enter The Array Values :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }

    printf("Please Enter The Number to be search :\n");
    scanf("%d",&num);
    index = find(array,n,num);
    if(index>0)
    {
        printf("The index of %d is %d \n",num,index);
    }
    else
        printf("The Number Not Found  \n");
}