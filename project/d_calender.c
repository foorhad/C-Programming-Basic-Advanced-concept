#include<stdio.h>
int getFirsDayOfYear(int year){
        int day = (year*365 + ((year-1) / 4)- ((year-1) / 100) + ((year-1) / 400)) % 7;
}
int main()
{
    char *month[] = {"Jan","Feb","Mar","Apr","May","Jun","July","Aug","Sep","Oct","Nov","Dec"};
    int dayInMonth[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    
    int i,j,week=0,spacebar=0,year;
    printf("Enter the year: ");
    scanf("%d",&year);
    week = getFirsDayOfYear(year);
    printf("************** Welcome to %d **************",year);
    for (i = 0; i < 12; i++)
    {
        printf("\n\n==================%s==================\n\n",month[i]);
        printf("\n   Sun   Mon   Tue   Wed   Thur   Fri   Sat\n\n");
        for ( spacebar = 1; spacebar <= week; ++spacebar)
        {
            printf("      ");
        }

        if ((year%4==0) & (year%100!=0) || (year%400==0))
        {
            dayInMonth[1]=29;
        } 
        for (j = 1; j <= dayInMonth[i]; j++)
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