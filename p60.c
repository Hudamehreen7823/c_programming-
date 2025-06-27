//write a code to printing one the rotations of the a number
#include<stdio.h>
int rotate(int n, int d) {
    int numDigits = 0, temp = n;
    
    // Count the number of digits in n
    while (temp > 0) {
        numDigits++;
        temp /= 10;
    }
    
    // Normalize d to be within the range of the number of digits
    d = d % numDigits;
    
    // If d is 0, return n as is
    if (d == 0) return n;

    // Calculate the divisor and multiplier
    int divisor = 1, multiplier = 1;
    for (int i = 0; i < numDigits - d; i++) {
        divisor *= 10;
    }
    for (int i = 0; i < d; i++) {
        multiplier *= 10;
    }

    // Split the number into two parts and rotate
    int leftPart = n / divisor;
    int rightPart = n % divisor;

    return rightPart * multiplier + leftPart;
}
int main() {
    int n, d;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Enter the number of rotations: ");
    scanf("%d", &d);
    
    int rotatedNumber = rotate(n, d);
    printf("Rotated number: %d\n", rotatedNumber);
    
    return 0;
}