/*program to calculates the sum of number(maximum 10 number)
  if the user entered a negative number the loop is terminate. that means it's not 
  added to the result*/

#include<stdio.h>
int main()
{
    int i;
    double n, sum = 0;
    for (i = 0; i < 10; i++)
    {
        printf("Enter the positive number: ");
        scanf("%lf",&n);

        if (n < 0.0)
        {
           break;;
        }
        sum += n;       
    }
    printf("sum of user entered number: %.2lf",sum);
    return 0;
}
