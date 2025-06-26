#include<stdio.h>
int main()
{
    int dayno;
    scanf("%d",&dayno);
    if(dayno==1)
        printf("Monday");
    else if(dayno==2)
        printf("Tuesday");
    else if(dayno==3)
        printf("Wednesday");
    else if(dayno==4)
        printf("Thursday");
    else if(dayno==5)
        printf("Friday");
    else if(dayno==6)
        printf("Saturday");
    else if(dayno==7)
        printf("Sunday");
    else
        printf("Invalid day number");
    return 0;
}