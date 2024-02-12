//Program to Prime number between two intervals using function
#include<stdio.h>
int checkprime(int num){
    int i, flag = 0;
    if (num == 0 || num == 1)
    {
        ++flag;
    }    
    for (i = 2; i <= num/2; i++)
    {
        if (num % i == 0)
        {
            ++flag;
            break;    
        }        
    }
    return flag;   
}
int main()
{
 int low,high,i;
 printf("Enter the lower bound: ");
 scanf("%d",&low);
 printf("Enter the higher bound: ");
 scanf("%d",&high);
 printf("Print prime number between %d to %d = ",low,high);
 for ( i = low; i < high ; i++)
 {
    int result = checkprime(i);
    if (result == 0)
    {
        printf("%d ",i);
    }
    
 }    
    return 0;
}