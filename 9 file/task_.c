#include<stdio.h>
int main()
{
    FILE *pointer;
 
 pointer = fopen("task_write.txt.txt","w");

 fputs("C is a fun programming language!\n",pointer);
 fputs("And, I love using Python language.",pointer);


    return 0;
}