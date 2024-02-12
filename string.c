#include<stdio.h>
int main()
{
 char st[20];
 int i;

 printf("Enter the string: ");
 for (i = 0; i < 5 -1; i++)
 {
    scanf("%c",&st[i]);
    // if (st[i] == '\n')
    // {
    //     break;
    // }
    
 }
 printf("%d \n",i);
 st[i] = '\0';
 printf("%s",st);
    
    return 0;
}