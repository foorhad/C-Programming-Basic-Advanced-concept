//C program to Calculate Standard diviation
#include<stdio.h>
#include<math.h>

void calculate_standard_deviaion(int n, int ages[]){
    int sum=0,mean,value,varience, standard_diviation;
    printf("For the given Data items: \n");
    for (int i = 0; i < n; i++){
        printf("%d, ",ages[i]);
        sum += ages[i];
    }
        //calculate the average of ages[] array
    mean = sum / n;
    printf("\nMean=%d\n",mean);

        //deffernce individual element from mean
    value = 0;
    for (int i = 0; i < n; i++){
        value += pow(ages[i]-mean, 2);
    }
    varience = value / n;
    printf("varience : %d\n",varience);

    standard_diviation = sqrt(varience);
    printf("Standard deviation of ages: %d",standard_diviation);
}
int main()
{
    int n, ages[100];   
    printf("Enter the numbe of array element: ");
    scanf("%d",&n);
    printf("Enter the %dth array element: \n",n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&ages[i]);
    }
    
    calculate_standard_deviaion(n,ages);
    
        
    return 0;
}