#include<stdio.h>
#include<string.h>
struct Person {
    char name[25];
    int age;
    char address[25];
    int sallary;
}   emloye1;

int main()
{

  strcpy(emloye1.name, "Forhad");

  emloye1.age = 23;
  strcpy(emloye1.address,"Chattogram");
//   emloye1.sallary = 25000;

  printf("name: %s\n",emloye1.name);
  printf("Age: %d\n",emloye1.age);
  printf("Address: %s\n",emloye1.address);
  printf("Sallary: %d\n",emloye1.sallary=25000);
    return 0;
}