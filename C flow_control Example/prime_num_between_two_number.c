//Display prime number between two intervals
#include<stdio.h>
int main()
{
 int low, high, flag = 0, i,j;
 printf("Enter the low number : ");
 scanf("%d",&low); 
 printf("Enter the high number : ");
 scanf("%d",&high);
 
 for ( i = low; i < high; i++)
 {
    flag = 0;
    for (j = 2; j <= i/2; j++)
    {
        if (i % j == 0)
        {
            ++flag;
            break;
        }        
    }
    if (flag == 0 && i != 0 && i != 1)
    {
        printf("%d, ",i);    
    }
 }    
    return 0;
}