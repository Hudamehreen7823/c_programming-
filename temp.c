#include<stdio.h>
void main()
{
    float celsius,fahreheat;
    printf("enter celsius");
    scanf("%f",&celsius);
    
    fahreheat=(1.8*celsius)+32;
    printf("temparature in fahreheat is %f",fahreheat);
    printf("enter fahreheat ");
    scanf("%f",&fahreheat);
    celsius=(fahreheat-32)*5/9;
    printf("temparature in celsius is %f",celsius);
    
    
    
}