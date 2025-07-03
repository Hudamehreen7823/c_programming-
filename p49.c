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
    int n = 5;
    char left = 'A', right = 'Z';
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if((i + j) % 2 == 0) {
                printf("%c ", left++);
            } else {
                printf("%c ", right--);
            }
        }
        printf("\n");
    }
    return 0;
}