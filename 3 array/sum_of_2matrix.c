//program to calculate sum of two matrix
#include<stdio.h>
int main()
{
 int matrix1[2][3], matrix2[2][3], result[2][3];
 for (int i = 0; i < 2; i++){
    for (int j = 0; j < 3; j++){
       printf("Enter the Matrix1 row=%d, col=%d: ",i,j);
       scanf("%d",&matrix1[i][j]);
    }   
 }
 for (int i = 0; i < 2; i++){
    for (int j = 0; j < 3; j++){
       printf("Enter the Matrix2 row=%d, col=%d: ",i,j);
       scanf("%d",&matrix2[i][j]);
    }   
 }   

// Adding the  matrix1 and matrix2:;
 for (int i = 0; i < 2; i++){
    for (int j = 0; j < 3; j++){
       result[i][j] =matrix1[i][j] + matrix2[i][j];       
    }   
 }
 printf("\n Display the sum two matrix: \n\n");
 for (int i = 0; i < 2; i++){
    for (int j = 0; j < 3; j++){
       printf("%d\t",result[i][j]);
       if(j==2)
       printf("\n");
    }   
 }

    return 0;
}