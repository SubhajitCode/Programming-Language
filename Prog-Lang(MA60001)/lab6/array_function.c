#include<stdio.h>
float staircase1(int n)
{
    float f[20];
    int i,j;
    for (i = 0; i < n; i++)
    {
        f[1] = (1 + (1 / (float)n));
        j = 1;
        do
        {
            f[j + 1] = 1 + 1 / f[j];
            j++;
        } 
        while (j < n);
    }
    return f[n];
}
float staircase2(int n)
{
    float f[20];
    int i,j;
    for (i = 0; i < n; i++)
    {
        f[1] = (1 + (1 / (float)n));
        for(j=1;j<=n;j++)
        {
            f[j + 1] = 1 + (float)(j+1)/ f[j];
        }
    }
    return f[n];
}
float staircase3(int n)
{
    float f[20];
    int i,j;
    for (i = 0; i < n; i++)
    {
        f[1] = (1 + (1 / (float)2*n));
        for(j=1;j<=n;j++)
        {
            f[j + 1] = 1 + (float)2*(j+1)/ f[j];
        }
    }
    return f[n];
}

main()
{
    int i, j, n;
    
    printf("Enter n: ");
    scanf("%d", &n);
    for(i=1;i<=n;i++) 
        printf("\n f[%d]=%f", i, staircase1(i));
    for(i=1;i<=n;i++) 
        printf("\n f[%d]=%f", i, staircase2(i));
    for(i=1;i<=n;i++) 
        printf("\n f[%d]=%f", i, staircase3(i));
    printf("\n");

}