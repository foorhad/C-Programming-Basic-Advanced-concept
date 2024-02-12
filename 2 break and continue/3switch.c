//another example of switch case.
#include<stdio.h>
int main()
{
    int day_num;
    printf("Enter week day number between(1-7): ");
    scanf("%d",&day_num);
 switch (day_num)
 {
 case 2:
 case 3:
 case 4:
 case 5:
 case 6:
    printf("weekday");
    break;
 case 1:
 case 7: 
    printf("weekend");
    break;
 default:
    printf("invalid! number");
    break;
 }   
    return 0;
}