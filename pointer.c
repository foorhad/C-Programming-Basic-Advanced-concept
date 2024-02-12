#include<stdio.h>
int main()
{
 int roll[] = {1,2,3,4,5,6};
 int *ptr = roll;

for (int i = 0; i < 6; i++)
{
   printf("Address of %d:  %p\n",roll[i], ptr+i);
}

 


    return 0;
}
