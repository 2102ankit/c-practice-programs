#include<stdio.h>

int main()
{
   int days, months, years;

    printf("Enter the number of days: ");
    scanf("%d", &days);
    
    years= days/365;
    days=days%365;
    months=days/30;
    days=days%30;
    
    printf("The number of years, months and days is %d years, %d months, %d days,",years,months,days);
           
   return 0;
}
