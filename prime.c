#include<stdio.h>
int isprime(int n){
    if (n <= 1)
    {
        return 0;
    }
    else{
        for (int i = 2; i <= n/2; i++)
        {
            if (n % i == 0)
            {
                return 0;
            }
        }
        return 1;
    }
    
}

int main()
{
 int i;
 for ( i = 1; i < 100; i++)
 {
    if (isprime(i))
    {
       printf("%d, ",i);
    }
 }
    
    return 0;
}