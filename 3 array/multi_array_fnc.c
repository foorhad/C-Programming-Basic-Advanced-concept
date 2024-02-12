//Program to pass Multidimensional array element in function
#include<stdio.h>
void display(int num[][2]){   
    for (int i = 0; i < 2; i++)
    {
       for (int j = 0; j < 2; j++)
       {
        printf("%d\t",num[i][j]);
        if(j==1){
            printf("\n");
        }
       }       
    }  
}

int main()
{
 int num[2][2] = {{1,2},{3,4}};
 display(num);   
    return 0;
}