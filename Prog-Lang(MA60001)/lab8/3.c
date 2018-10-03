#include<stdio.h>
int M,N;
void matrix_add(int a[M][N],int b[M][N],int result[M][N],int m,int n)
{
    int i,j;
    for(i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            result[i][j]=a[i][j]+b[i][j];
        }
    }
}
void scan_Matrix(int matrix[M][N])
{
    int i,j;
    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        {
            printf("Enter the Value of matrix[%d][%d]\n",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
}
void print_Matrix(int matrix[M][N])
{
    int i,j;
    printf("Printing matrix --------\n");
    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        {
            printf("%2d ",matrix[i][j]);
        }
        printf("\n");
    }


}

void main()
{
    printf("Please enter The Value Of M and N :\n");
    scanf("%d %d",&M,&N);
    int a[M][N],b[M][N],c[M][N];
    printf("Please enter The Value Of Matrix A  :\n");
    scan_Matrix(a);
    printf("Please enter The Value Of Matrix B  :\n");
    scan_Matrix(b);
    matrix_add(a,b,c,M,N);
    print_Matrix(c);


}