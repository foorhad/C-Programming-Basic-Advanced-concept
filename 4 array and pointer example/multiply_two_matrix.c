//program to multiply two matrix
//1st matrix column and  2nd matrix Row are to be equal equal col*row
#include<stdio.h>
int main()
{
    int matrix1[100][100],matrix2[100][100],multiply[100][100],row1,row2,col1,col2,i,j,k,sum=0;   

    printf("Enter the row and column number of First Matrix: ");
    scanf("%d %d",&row1, &col1);   
    printf("Enter the row and column number of 2nd Matrix: ");
    scanf("%d %d",&row2, &col2);

    while (col1 != row2){
        printf("Error! Please enter the again row and columen number both mathrix  : \n");
        printf("Enter the row and column number of First Matrix: ");
        scanf("%d %d",&row1, &col1);   
        printf("Enter the row and column number of 2nd Matrix: ");
        scanf("%d %d",&row2, &col2);
        }      
    printf("Enter the first matrix Element: \n");
    for ( i = 0; i < row1; i++)
    {
        for ( j = 0; j < col1; j++)
        {
            printf("Matrix1[%d][%d]: ",i,j);
            scanf("%d",&matrix1[i][j]);
        }      
    }

    printf("Enter the second matrix Element: \n");
    for ( i = 0; i < row2; i++)
    {
        for ( j = 0; j < col2; j++)
        {
            printf("Matrix2[%d][%d]: ",i,j);
            scanf("%d",&matrix2[i][j]);
        }      
    }
                //multiply the Matrix1 and Matrix2:
    for ( i = 0; i < row1; i++)
    {
        for ( j = 0; j < col2; j++)
        {
            for ( k = 0; k < col1; k++)
            {
                multiply[i][j] += matrix1[i][k] * matrix2[k][j] ;
            }
            // multiply[i][j] = sum;
            // sum = 0;
            printf("%d  ",multiply[i][j]);
        }      
        printf("\n");
    }

    //Display the Matrix1
    printf("\n\nMatrix1: \n");    
    for ( i = 0; i < row1; i++)
    {
        for ( j = 0; j < col1; j++)
        {
            printf("%d  ",matrix1[i][j]);
        }      
        printf("\n");
    }

        //Display the Matrix2
    printf("\n\nMatrix2: \n");    
    for ( i = 0; i < row2; i++)
    {
        for ( j = 0; j < col2; j++)
        {
            printf("%d  ",matrix2[i][j]);
        }      
        printf("\n");
    }
        //Display the Multiply Matrix: 
    // printf("\n\nMultiply Matrix: \n");
    // for ( i = 0; i < row1; i++)
    // {
    //     for ( j = 0; j < col2; j++)
    //     {
    //         printf("%d  ",multiply[i][j]);
    //     }      
    //     printf("\n");
    // }
    
    return 0;
}
