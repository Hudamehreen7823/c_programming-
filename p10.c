#include<stdio.h>
int main()
{
    int day, month, year;
    printf("Enter a date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &day, &month, &year);
    if(month < 1 || month > 12) {
        printf("Invalid date: Month must be between 1 and 12.\n");
        return 0;
    }
    if(month == 2) {
        if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) 
        { 
            if(day < 1 || day > 29)
             {
                printf("Invalid date: February in leap year must have days between 1 and 29.\n");
                return 0;
            }
        } 
        else
         {
            if(day < 1 || day > 28)
             {
                printf("Invalid date: February must have days between 1 and 28 in a non-leap year.\n");
                return 0;
            }
        }
    } else if(month == 4 || month == 6 || month == 9 || month == 11)
     { 
        if(day < 1 || day > 30) {
            printf("Invalid date: Months with 30 days must have days between 1 and 30.\n");
            return 0;
        }
    }
     else 
     {
        if(day < 1 || day > 31) 
        {
            printf("Invalid date: Months with 31 days must have days between 1 and 31.\n");
            return 0;
        }
    }

    printf("The date %02d/%02d/%04d is valid.\n", day, month, year);
    return 0;
}