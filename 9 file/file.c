#include<stdio.h>
int main()
{
    FILE *f;

    f = fopen("index.c", "a");
    if (f == NULL)
    {
        printf("File does not create.");
    }
    else
    {
        printf("File create successfully.");
    }
    
     

    return 0;
}