//Program to create a three Dimensional array input and print
#include<stdio.h>
int main()
{
 int array[2][3][4];
 for (int i = 0; i < 2; i++)
 {
     for (int j = 0; j < 3; j++)
     {
        for (int k = 0; k < 4; k++)
        {
                printf("Enter the element: ");
                scanf("%d",&array[i][j][k]);
        }
    }
 }
 printf("\n Display the user input element: \n\n");
 for (int i = 0; i < 2; i++){
     for (int j = 0; j < 3; j++){
        for (int k = 0; k < 4; k++){
                printf("%d \t",array[i][j][k]);                
        }
    }
 }
    
    return 0;
}