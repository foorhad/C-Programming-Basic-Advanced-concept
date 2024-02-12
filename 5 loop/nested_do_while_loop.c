//Display the multiplication table till n using the nested do while loop.
#include<stdio.h>
int main()
{
    int row,col,nrow;
    row = 1;
    col = 1;
    printf("Enter the number of row: ");
    scanf("%d",&nrow);
    do
    {
        col = 1;
        printf("Multiplication table of %d: \n",row);
        do
        {   
            printf("%d*%d=%d\n",row,col,row*col);
            col++;
        } while (col <= nrow);
    printf("\n\n");
    row++;
    } while (row <= nrow); 
    return 0;
}