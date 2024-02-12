//program to create realloc(), malloc() and free() funciton
#include<stdio.h>
#include<stdlib.h>
int main()
{
 int *ptr, n1, n2,i,j;
 printf("Enter the size: ");
 scanf("%d",&n1);

 ptr = (int*) malloc(n1* sizeof(int));
 printf("Address of previously Allocated memory: \n");
 for(i = 0; i < n1; i++){
    printf("%pc\n",ptr+i);
 }
 
 printf("Enter the size: ");
 scanf("%d",&n2);
 
 //reallocating the memory
 ptr = realloc(ptr, n2 * sizeof(int));
 printf("Addrss of newly allocated memory: \n");
 for ( j = 0; j < n2; j++)
 {
   printf("%pc\n",ptr+j);
 }
 
 free(ptr);
  
    return 0;
}