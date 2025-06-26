#include<stdio.h>
int main()
{
    int a, b, c, d;
    printf("enter four numbers:");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if (a > b)
    {
        if (a > c)
        {
            if (a > d)
            {
                printf("%d is greatest \n", a);
            }
        }
    }
    else
    {
        if (b > c)
        {
            if (b > d)
            {
                printf("%d is greatest \n", b);
            }
        }
        else
        {
            if (c > d)
            {
                printf("%d is greatest \n", c);
            }
            else
            {
                printf("%d is greatest \n", d);
            }
        }
    }
    return 0;
}
