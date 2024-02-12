//Program to transpose the two Matrix
#include<stdio.h>
int main()
{
 int num[100][100], transpose[100][100], i,j,r,c;
 printf("Enter the rows and columns: ");
 scanf("%d %d",&r,&c);

 printf("Enter element : \n");
 for (i = 0; i < r; i++)
 {
    for ( j = 0; j < c; j++)
    {
        printf("num[%d][%d]: ",i+1,j+1);
        scanf("%d",&num[i][j]);
    }  
 }
 printf("\n Entered Matrix: \n");
  for (int i = 0; i < r; i++)
 {
    for ( j = 0; j < c; j++)
    {
        printf("%d  ",num[i][j]);
    }
    printf("\n");
 }
 
 for (i = 0; i < r; i++){
    for ( j = 0; j < c ; j++)
    {
        transpose[j][i] = num[i][j];
    }
 }
 printf("\n Transpose Matrix: \n");
 for (int i = 0; i < c; i++)
 {
    for ( j = 0; j < r ; j++)
    {
        printf("%d  ",transpose[i][j]);
    }
    printf("\n");
 }

    return 0;
}