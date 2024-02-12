#include<stdio.h>
int main()
{
    int matrix1[10][10], matrix2[10][10], matrix3[10][10], r,c,i,j,k;
    printf("Enter the number of row:  ");
    scanf("%d",&r);
    printf("Enter the number of column:  ");
    scanf("%d",&c);

    printf("\nEnter the First Matrix Element: \n");  
    for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
        { 
            printf("Matrix1[%d][%d]: ",i,j);
            scanf("%d",&matrix1[i][j]);
        }    
    }

    printf("\nEnter the second Matrix Element: \n");  
    for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {
            printf("Matrix2[%d][%d]: ",i,j);
            scanf("%d",&matrix2[i][j]);
        }    
    }
            //Multiply Matrix
    for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {
        matrix3[i][j] = 0;
        for ( k = 0; k < c; k++)
        {
            matrix3[i][j] += matrix1[i][k] * matrix2[k][j];
            }
            printf("%d  ",matrix3[i][j]);    
        }    
        printf("\n");
    }
    // printf("\nDisplay the Matrix1 : \n");  
    // for ( i = 0; i < r; i++)
    // {
    //     for ( j = 0; j < c; j++)
    //     {
    //         printf("%d ",matrix1[i][j]);
    //     }    
    //     printf("\n");
    // }

    // printf("\nDisplay the Matrix2 : \n");  
    // for ( i = 0; i < r; i++)
    // {
    //     for ( j = 0; j < c; j++)
    //     {
    //         printf("%d ",matrix2[i][j]);
    //     }    
    //     printf("\n");
    // }
    // printf("\nDisplay the Matrix3 : \n");  
    // for ( i = 0; i < r; i++)
    // {
    //     for ( j = 0; j < c; j++)
    //     {
    //         printf("%d ",matrix3[i][j]);
    //     }    
    //     printf("\n");
    // }

    return 0;
}