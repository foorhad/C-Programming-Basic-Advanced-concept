#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ages, n=4;
    ages = (int*) malloc(n * sizeof(int));

    if(ages == NULL){
        printf("Error! Memory not be allocated.");
        return 0;
    }

    printf("Enter %dth value: \n",n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",ages+i);
    }
    printf("Input values are: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n",*(ages+i));
    }

    n = 6;
    ages[4] = 32;
    ages[5] = 59;
                     //Resize the array to store 6 elements:
    ages = realloc(ages, n * sizeof(int));

    printf("After reallocation: \n");       
    for (int i = 0; i < n; i++){
        printf("%d\n",*(ages+i));
    }

    free(ages);

 return 0;   
}