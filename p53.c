#include<stdio.h>
int main()
{
    goto greet_branch;
    printf("Hello, World!\n");
    greet_branch:
        printf("CSE\n");
    //goto greet_branch;    //infinite loop
        printf("PSCMR\n");
    return 0;
}