//Program to print first 50 natural number using reursive algorithm
#include<stdio.h>
int recurnatural(int n){
    if (n <= 50)
    {
        printf("%d ",n);
        recurnatural(n + 1);
    }
    
}

int main()
{
 int num = 1;
 recurnatural(num); //call function and passed argument   
    return 0;
}

