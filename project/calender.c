#include<stdio.h>
int getfirstdayofyear(int year){
    int day = (year*365 + ((year-1) / 4)- ((year-1) / 100) + ((year-1) / 400)) % 7;
    return day;
}
int main()
{
 char *month[] = {"January", "February", "March", "April", "May", "June", "July","August","September","October", 
                "November", "December"};
 int dayinmonth[] = {31,28,31,30,31,30,31,31,30,31,30,31};
 int i, j, total_day,week=0, spacecounter=0,year;
 printf("Enter the year: ");
 scanf("%d",&year);
 if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0)) 
 {
    dayinmonth[1] = 29;
 }
 week = getfirstdayofyear(year);
 printf("***************Welcome to %d **************\n",year);
 for (i = 0; i < 12 ; i++)
 {
    printf("\n\n    ----------------%s----------------\n\n",month[i]);
    printf("\n   Sun   Mon   Tues   Wed   Thu   Fri   Sat\n\n");
    for (spacecounter = 1; spacecounter <= week; spacecounter++)
    {
        printf("      ");
    }
    
    total_day = dayinmonth[i];
    for (j = 1; j <= total_day; j++)
    {
        printf("%5d ",j);
        ++week;
        if(week > 6){
            week=0;
            printf("\n");
        }
    }
    
 }
                    
    return 0;
}