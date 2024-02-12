#include <stdio.h>
#include<string.h>
typedef struct{
    int id;
    char b_name[20];
}  book;

int main() {
    book mybook1,mybook2,mybook3;
    // book mybook2;
    // book mybook3;
    
    mybook1.id = 10;
    strcpy(mybook1.b_name,"C programming");
    
    mybook2.id = 11;
    strcpy(mybook2.b_name,"C++ programming");
    
    mybook3.id = 12;
    strcpy(mybook3.b_name,"Python programming");
    
    printf("id: %d\n",mybook1.id);
    printf("Book name: %s\n",mybook1.b_name);
    
    printf("id: %d\n",mybook2.id);
    printf("Book name: %s\n",mybook2.b_name);

    printf("id: %d\n",mybook3.id);
    printf("Book name: %s\n",mybook3.b_name);

   
    return 0;
}