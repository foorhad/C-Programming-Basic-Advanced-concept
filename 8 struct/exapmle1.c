#include<stdio.h>
struct student
{
    char name[10];
    int roll;
    float gpa;
}   s[3];


int main()
{
    int i;
    printf("Enter the student info:\n ");
    for ( i = 1; i <= 3; i++)
    {
        printf("Enter the student name: ");
        scanf("%s",&s[i].name);
        
        printf("Enter the student Roll: ");
        scanf("%d",&s[i].roll);

        printf("Enter the student gpa: ");
        scanf("%f",&s[i].gpa);
    }
    
    printf("\n\nDisplay information: \n\n ");
    for ( i = 1; i <= 3; i++)
    {
        // printf("Name: %s\n",s[i].name);
        // printf("Roll: %d\n",s[i].roll);
        // printf("Gpa:  %.2f\n\n",s[i].gpa);
        printf("Name : %s.   Roll: %d.   Gpa: %.2f\n",s[i].name,s[i].roll,s[i].gpa);
        
      
    }
    
    return 0;
}