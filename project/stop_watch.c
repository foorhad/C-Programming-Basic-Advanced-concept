#include<stdio.h>
#include<conio.h>
#define clrscr() printf("\e[1;1H\e[2J")
#define CYCLE 5
#include<unistd.h>
int main()
{
    int hours, minute, second;
    printf("Enter the hours minuter and second: ");
    scanf("%d%d%d",&hours,&minute,&second);
  
    int h = 0, m = 0, s = 0; 
    while(1){
         printf("%.2d:%.2d:%.2d\n",h,m,s);
         if(h==hours && m==minute && s==second){
            break;
         }else
         {
             clrscr();
         }
         
        sleep(1);
        s++;
        if(s  == CYCLE){
        m++;
        s=0;
        }
        if(m == CYCLE){
            h++;
            m=0;
        }
    
    }
    
    return 0;
}