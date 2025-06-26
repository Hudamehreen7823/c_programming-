//to check the number is prime or composite number in minimal code
#include <stdio.h>
#include<math.h>
int main() {
    int n,count=0;
    printf("Enter a number: ");
    scanf("%d", &n);
        for (int i = 2;  i <= (n/2); i++) {
            if(!(n%i))
            {
                count++;
            }
            
}
printf((count==0)?"prime":"composite");
    return 0;
}