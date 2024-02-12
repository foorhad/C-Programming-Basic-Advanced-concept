//Program to Add to Matrix
#include<stdio.h>
int main()
{
    int Matrix1[100][100], Matrix2[100][100], i, j,row,col,sum[100][100];
    printf("Enter the row number between(1-100): ");
    scanf("%d",&row);
    printf("Enter the column number between(1-100): ");
    scanf("%d",&col);
    printf("Enter Element of Matrix1: \n");
        //Enter the element from user and store in array
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("Enter Element of a%d%d: ",i+1,j+1);
            scanf("%d",&Matrix1[i][j]);
        }    
    }
    printf("\nEnter the Element of Matrix2: \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("Enter Element of b%d%d: ",i+1,j+1);
            scanf("%d",&Matrix2[i][j]);
        }    
    }

    printf("Display of Matrix1: \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d  ",Matrix1[i][j]);
            printf("\n");
            // if (j == col-1)
            // {
            //     printf("\n");
            // }          
        } 
        printf("\n");   
    }
    printf("\n\nDisplay of Matrix2: \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d  ",Matrix2[i][j]);
        }    
        printf("\n");
    }
    
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            sum[i][j] = Matrix1[i][j] + Matrix2[i][j];
        }    
    }

    printf("\n\nDisplay the sum of Matrix1 & Matrix2: \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d  ",sum[i][j]);
        }  
         printf("\n");
    }


    
    return 0;
}