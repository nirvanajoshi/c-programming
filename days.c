
/*program to convert days into year weeks and days*/
#include<stdio.h>
int main()
{ 
     int number,years,rem,weeks,days;
    printf("Enter the number of days to convert into year weeks and days");
    scanf("%d",&number);
    years = days / 365;
    printf("Year: %d",years);
    rem = days % 365;
    weeks = rem / 7;
    printf("week: %d",weeks);
    days = rem % 7;
    print("days :%d",days);
    return 0;
}