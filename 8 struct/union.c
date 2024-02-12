#include<stdio.h>
#include<string.h>
union person
{
    char name[20];
    int age;
    char x[40];
}   person1;

int main()
{
    printf("size of union:  %lu\n",sizeof(person1));
    strcpy(person1.name, "Forhad");
    person1.age = 21;

    printf("name:  %s\n",person1.name);
    printf("age: %d\n",person1.age);
    
    return 0;
}