//to print all the prime numbers between the given upper and lower limits and also include the upper and lower limits if they are prime in  minimal code
#include <stdio.h>
#include <math.h>
int main()
 {
    int lower, upper, count,j,i;
    printf("Enter lower and upper limits: ");
    scanf("%d %d", &lower, &upper);
    count = 0;
        for ( i=(lower==1)?lower+1:lower; i <= upper;i++) 
        { count=0;
          for(j=2;j<=(sqrt(i));j++)
          {
              if(!(i%j==0))
              {
                  count++;
              }
         
        }
        (count==0)&& printf("%d ",i);
    }
    return 0;
}