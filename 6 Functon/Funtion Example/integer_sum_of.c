//Program to Integer as a sum of a two prime number
#include<stdio.h>
int checkprime(int num){
    int i, flag=1;
    if(num == 1 || num == 0){
        flag=0;
    }
    else{
        for ( i = 2; i <= num/2; i++)
        {
            if (num % i == 0)
            {
                flag = 0;
                break;
            }       
        }
    }  
    return flag;  
}
int main()
{
 int n,i,flag=1;
 printf("Enter the positive number: ");
 scanf("%d",&n);
 for (i = 1; i <= n/2; i++)
 {
    if (checkprime(i) == 1)
    {
        if (checkprime(n-i) == 1)
        {
          printf("%d = %d + %d\n",n,i,n-i);
          flag=0;
        }
        
    }  
 }
 if (flag == 1)
 {
    printf("%d cannot be expressed number as a sum of two prime number.",n);
 }
     
    return 0;
}