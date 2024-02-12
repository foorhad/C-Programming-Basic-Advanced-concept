#include<stdio.h>
struct person
{
    int age;
    int weight;
};

int main()
{
    struct person *ptr, person1;

    ptr = &person1;

    printf("Enter the age: ");
    scanf("%d",&ptr->age);

    printf("Enter the age: ");
    scanf("%d",&ptr->weight);

    printf("Age of person1: %dyears\n",ptr->age);
    printf("Weight of person1: %dkg\n",ptr->weight);
    
    return 0;
}