#include<stdio.h>
#include<string.h>
struct Person{
    char name[50];
    int citNo;
    float salary;
}   person1;


int main()
{
    strcpy(person1.name, "forhad");
    
    person1.citNo = 1541;
    person1.salary = 2550;
    
    printf("%s\n",person1.name);
    printf("Citizenship No.: %d\n", person1.citNo);
    printf("Salary: %.2f", person1.salary);
    return 0;
}