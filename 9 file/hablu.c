#include<stdio.h>
int main()
{
    FILE *ptr;

    ptr = fopen("hablu.txt","w");
    char name[100];
    int age, i, num;
    printf("Enter the number: ");
    scanf("%d",&num);
    if (ptr == NULL)
        {
            printf("File created unsuccessful");
        }
    else
    {   
        for(i = 0; i < num; i++)
        {
            printf("File create successful\n");
            printf("Enter the name: ");
            fflush(stdin);
            gets(name);
            printf("Enter Age: ");
            scanf("%d",&age);

            fprintf(ptr,"name: %s       Age: %d\n",name,age);
        }

    }

    return 0;
}