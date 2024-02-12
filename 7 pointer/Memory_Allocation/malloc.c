#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr, n,i;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Entered number of elements: %dth\n",n);

    ptr =(int*) malloc(n*sizeof(int));

    if(ptr == NULL){
        printf("Error! Memory not Allocated.\n");
        return 0;
    }
    else{

        printf("Memory sucessfully allocated using Malloc().\n");

        for ( i = 0; i < n; i++){
            ptr[i] = i+1;
        }
        printf("The element of the array are: ");

        for ( i = 0; i < n; i++){
            printf("%d, ",ptr[i]);
        }
    }
    free(ptr);

    return 0;
}