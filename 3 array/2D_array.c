//program to print the two dimensional array
#include<stdio.h>
int main()
{
 int row=2, col=6,i,j;
 int array[row][col];
 for (int i = 0; i < row; ++i)
 {
    for (int j = 0; j < col; ++j)
    {
        printf("row=%d, col=%d : ",i,j);
        scanf("%d",&array[i][j]);
    }   
 }
 printf("Dispaly user input number: \n");
 for (int i = 0; i < row; ++i)
 {
    for (int j = 0; j < col; ++j)
    {
       printf("%d \t",array[i][j]);
       if(j<col){
       printf("\n");
       }
    }    
 } 
    return 0;
}