//multiples of a number in perfect squares
#include <stdio.h>
#include<math.h>
int main() {
    int n,count=0;
    printf("Enter a number: ");
    scanf("%d", &n);
        for (int i = 2;  i <= (sqrt(n)); i++) {
            if(!(n%i))
            {
                count++;
            }
            
}
printf((count==0)?"prime":"composite");
    return 0;
}