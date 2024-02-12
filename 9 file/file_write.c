#include<stdio.h>
int main()
{
        FILE *ptr;
    ptr = fopen("textwrite.txt", "w");
    fputs("Now i'm studing at Bangladesh sweden Polytechnic institue \n",ptr);
    fputs("Now i'm studing at Daffodil International university.",ptr);

    fclose(ptr);


    ptr = fopen("textwrite.txt", "r");
    char con[1000];
    
    while (fgets(con, 100, ptr))
    {
      printf("%s",con);
    }
     
    
 



 

    return 0;
}