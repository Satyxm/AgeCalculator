#include<stdio.h>
#include<conio.h>
int main()
{
 int current_date,current_month,current_year,birth_date,birth_month,birth_year;
 printf("Enter the current date: ");
 scanf("%d",&current_date);
 printf("Enter the current month: ");
 scanf("%d",&current_month);
 printf("Enter the current year: ");
 scanf("%d",&current_year);
 
 printf("Enter the birth date: ");
 scanf("%d",&birth_date);
 printf("Enter the birth month: ");
 scanf("%d",&birth_month);
 printf("Enter the birth year: ");
 scanf("%d",&birth_year);
 
 void findage(int current_date, int current_month, int current_year, int birth_date, int birth_month, int birth_year)
 {
     int month[]={31,28,31,30,31,30,31,31,30,31,30,31};
     
     if(birth_date>current_date){
         current_date=current_date+month[birth_month - 1];
         current_month=current_month - 1;
     }
     if(birth_month>current_month){
         current_year=current_year - 1;
         current_month=current_month + 12;
     }
     int resulting_date=current_date-birth_date;
     int resulting_month=current_month-birth_month;
     int resulting_year=current_year-birth_year;
     
     printf("Present age:\n %d years %d months and %d days old.",resulting_year,resulting_month,resulting_date);
     
     }
     findage(current_date,current_month,current_year,birth_date,birth_month,birth_year);
     return 0;
}