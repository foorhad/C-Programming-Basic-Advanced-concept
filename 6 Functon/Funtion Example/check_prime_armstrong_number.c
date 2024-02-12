//Program to check number is Armstrong or Prime
#include<stdio.h>
#include<math.h>
int checkprime(int n1){
    int i, flag =1 ;
    if(n1 == 0 || n1 == 1){
        flag = 0;
    }
    for (i = 2; i <= n1/2; i++)
    {
        if (n1 % i == 0)
        {
            flag=0;
            break;
        }
    }
    return flag;
}    
int checkarmstrong(int n){
    int original = n, remainder,flag = 1;
    double result=0;
        while (original != 0)
        {
            remainder = original % 10;
            // result += remainder*remainder*remainder;
            result += pow(remainder,3);
            original /= 10; 
        }
    if (n == result){
        flag=0;
    }
    return flag;    
}    
int main()
{
int num, result;
printf("Enter the Positive number: ");
scanf("%d",&num);

 result = checkprime(num);
if (result == 1){
    printf("%d is prime nummber\n",num);
}
else{
    printf("%d isn't prime nummber\n",num);
}
result = checkarmstrong(num);
if (result == 0){
    printf("%d is an Armstrong nummber\n",num);
}
else{
    printf("%d isn't an Armstrong nummber\n",num);
}
    return 0;
}