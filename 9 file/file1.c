#include<stdio.h>
int main()
{
 FILE *ptr;

 ptr = fopen("file5.txt","r");

 char content[1000];

//  if (ptr == NULL)
//  {
//     printf("File open unsucessfull!");
//  }
//  else{
//    while (fgets(content, sizeof(content), ptr))
//    {
//        printf("%s",content);
   // }
   fgets(content, sizeof(content), ptr);
   printf("%s",content);
   
    
//  }
 

    return 0;
}