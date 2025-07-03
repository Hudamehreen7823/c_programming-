/*
 c programming pattern as:
A Z B Y C 
Y D W E V
F U G T H
S I R J Q
K P L O M
*/
#include<stdio.h>
int main()
{
    int n,cur=1;
    printf("enter n:");
    scanf("%d",&n);
    char left = 'A', right = 'Z';
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <=n; j++) 
        {
            printf("%c",(cur)?left:right);
            (cur)?left++:right--;
            cur ^=1;
        }
    
        /*/

            if((i + j) % 2 == 0) {
                printf("%c ", left++);
            } else {
                printf("%c ", right--);
            }
        }
            */
        printf("\n");
    }
    return 0;
}