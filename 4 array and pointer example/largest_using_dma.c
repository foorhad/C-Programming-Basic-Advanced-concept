//Find the largest number (Dynamic memory allocation is used)
#include<stdio.h>
#include<stdlib.h>
int main()
{
 int *ptr;
 int i, n;

 printf("Enter the number of array element: ");
 scanf("%d",&n);

 ptr = (int*)malloc(n*sizeof(int));

 if (ptr == NULL)
 {
    printf("Memory not be Allocated.");
    return 0;
 }
 else{
        //storing element entered by the user
    for ( i = 0; i < n; i++){   
        printf("Enter an element %d: ",i+1);
        scanf("%d",ptr+i);
    }
    
    //finding the largest element
    for (i = 1; i < n; i++){
        if (*ptr < *(ptr+i)){
            *ptr = *(ptr+i);
        }
        
    }
    printf("largest= %d",*ptr);   
 }
 free(ptr);
 
 
    return 0;
}