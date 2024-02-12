#include<stdio.h>
int main()
{
 FILE *ptr;

 ptr = fopen("task_write.txt","r");
 char content[100];

 fgets(content, sizeof(content), ptr);
 printf("%s",content); 
    return 0;
}