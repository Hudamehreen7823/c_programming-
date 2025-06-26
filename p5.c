#include<stdio.h>
int main()
{
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);
    if(marks<=100 && marks >=92)
    printf("outstanding");
    else if (marks<=91&& marks>=82)
    printf("super");
    else if(marks<=81&&marks>=72)
    printf("grade A");
    else
    printf("fail");
} 