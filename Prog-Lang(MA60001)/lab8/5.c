#include<stdio.h>
int M,N;
void scan_Matrix(int matrix[M][N])
{
    int i,j;
    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        {
            printf("Enter the Value of matrix[%d][%d]\n",i+1,j+1);
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
void matrix_Transpose(int a[M][N], int b[N][M])
{
    int i,j;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            b[i][j]=a[j][i];
        }
    }
}
void main()
{
    printf("Please enter The Value Of M and N :\n");
    scanf("%d %d",&M,&N);
    int a[M][N],b[N][M];
    printf("Please enter The Value Of Matrix A  :\n");
    scan_Matrix(a);
    matrix_Transpose(a,b);
    print_Matrix(a);
    printf("------------------------Transpose Matrix-----------------------------------\n");
    int temp= M;
    M=N;
    N=temp;
    print_Matrix(b);


}