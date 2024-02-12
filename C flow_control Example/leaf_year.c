//Program to checked year is leaf year or not
#include<stdio.h>
int main()
{
 int year;
    printf("Enter the year: ");
    scanf("%d",&year);
    if((year % 4 == 0) || ((year % 400 == 0 ) && (year % 100 == 0))) {
            printf("%d is a Leaf year",year);
    }
    else{
        printf("%d isn't a leaf year",year);
    }      
        return 0;
}
