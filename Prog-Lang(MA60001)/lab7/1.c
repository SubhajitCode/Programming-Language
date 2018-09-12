#include<stdio.h>
int M,N;
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
void print_Matrix_Diagonal(int matrix[M][N])
{
    int i,j;
    printf("Printing matrix --------\n");
    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        {
            if(i==j)
                printf("%2d ",matrix[i][j]);
            else
                printf("%2d ",00);
        }
        printf("\n");
    }


}
void print_Matrix_UpperTriangular(int matrix[M][N])
{
    int i,j;
    printf("Printing matrix --------\n");
    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        {
            if(i<=j)
                printf("%2d ",matrix[i][j]);
            else
                printf("%2d ",00);
        }
        printf("\n");
    }


}
void print_Matrix_LowerTriangular(int matrix[M][N])
{
    int i,j;
    printf("Printing matrix --------\n");
    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        {
            if(i>=j)
                printf("%2d ",matrix[i][j]);
            else
                printf("%2d ",00);
        }
        printf("\n");
    }


}
void swap(int a[],int i,int j)
{
    int temp;
    temp =a[i];
    a[i]=a[j];
    a[j]=temp;
}
void selection_Sort(int a[], int l, int mode)
{
    if (mode == 0)
    {
        int i, j, min_index;
        for (i = 0; i < l - 1; i++)
        {
            min_index = i;
            for (j = i + 1; j < l; j++)
            {
                if (a[j] < a[min_index])
                {
                    min_index = j;
                }
            }
            swap(a, min_index, i);
        }
    }
    else if (mode == 1)
    {
        int i, j, max_index;
        for (i = 0; i < l - 1; i++)
        {
            max_index = i;
            for (j = i + 1; j < l; j++)
            {
                if (a[j] > a[max_index])
                {
                    max_index = j;
                }
            }
            swap(a, max_index, i);
        }
    }
}
void rearrange_columnMatrix(int matrix[M][N])
{
    int i,j;
    int temp_array[M];
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            temp_array[j] = matrix[j][i];
        }
        selection_Sort(temp_array, M,0);
        for (j = 0; j < M; j++)
        {
            matrix[j][i] = temp_array[j];
        }
    }
}
void rearrange_RowMatrix(int matrix[M][N])
{
    int i;
    for (i = 0; i < M; i++)
    {
        selection_Sort(matrix[i], N,1);
    }

}
int Calc_odd(int matrix[M][N])
{
    int result=0,i,j;
    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        {
            if((matrix[i][j]%2)==1)
            {
                result++;
            }
        }
    }
    return result;
}
int calc_Trace(int matrix[M][N])
{
    int result=0,i,j;
    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        {
            if(i==j)
            {
                result=result+matrix[i][j];
            }
        }
    }
    return result;

}
void copy_Matrix(int matrix[M][N],int original_matrix[M][N])
{
    int i,j;
    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        {
            original_matrix[i][j]=matrix[i][j];
        }
    }
}
void Change_Diagonal_Matrix(int matrix[M][N])
{
    int i,j;
    for(i=0;i<M;i++)
    {
        for(j=0;j<(N/2);j++)
        {
            swap(matrix[i],j,(N-j-1));
        }
    }
}
int main()
{

    printf("Enter The value of M and N\n");
    M=3,N=4;
   // scanf("%d%d",&M,&N);
    int matrix[3][4]=
    {
        {12, 1, 23, 45},
        {78 ,96, 65, 12}, 
        {78, 45,  8, 86}
    };
    int original_matrix[3][4];
    copy_Matrix(matrix,original_matrix);

    //scan_Matrix(matrix);
    print_Matrix(matrix);
    rearrange_columnMatrix(matrix);
    printf("Printing Column rearranged matrix --------\n");
    print_Matrix(matrix);
    rearrange_RowMatrix(matrix);
    printf("Printing Row rearranged matrix --------\n");
    print_Matrix(matrix);
    printf("Total Odd Elemnts are %d \n",Calc_odd(matrix));
    copy_Matrix(original_matrix,matrix);
    printf("Trace Of the Matrix is %d \n",calc_Trace(matrix));
    printf("Printing Diagonal matrix --------\n");
    print_Matrix_Diagonal(matrix);
    printf("Printing Upper Triangular matrix --------\n");
    print_Matrix_UpperTriangular(matrix);
    printf("Printing Lower Triangular matrix --------\n");
    print_Matrix_LowerTriangular(matrix);
    printf("Printing  Changed Diagonal matrix --------\n");
    Change_Diagonal_Matrix(matrix);
    print_Matrix(matrix);



}