//finding the number of digits in a number (sir)
#include <stdio.h>
int main() {
    int num,dig=0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while(num){
        num/= 10;
        dig++;
    }
printf("Number of digits: %d\n", dig);
    return 0;
}
