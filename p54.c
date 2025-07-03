//printing 1 to 10 using goto statement
#include<stdio.h>
int main()
{
    int i = 1;
   /* start:
        if(i > 10) goto end; 
        printf("%d ", i);
        i++;
        goto start;
    end:
        printf("\n");*/
        start:
            printf("%d ", i);
            i++;
            if(i <= 10) goto start;
    return 0;
}