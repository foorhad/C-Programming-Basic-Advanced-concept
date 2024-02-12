//Program to create Malloc() , Calloc() and free() function
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n, i, sum=0, *ptr;
    printf("Enter number of element: ");
    scanf("%d",&n);

    ptr = (int*) calloc(n, sizeof(int));
    // ptr = (int*) malloc(n, sizeof(int));

    if (ptr == NULL)
    {
        printf("Error! Memory not Allocated");
        exit(0);
    }
    printf("Enter %dth element: \n",n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d",i+ptr);
        sum += *(i+ptr);
    }
    printf("sum:  %d",sum);

    free(ptr);
    
    return 0;
}