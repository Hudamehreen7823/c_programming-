#include <stdio.h>
#define N 1000
int main() 
{
    int arr[N];
    int n,i;
    // Inputting the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    // Inputting the array
    printf("Enter an array:\n");
    for (i = 0; i< n; i++)
    {
        printf("a[%d]=",i);
        scanf("%d", &arr[i]);
    }
    // Printing the reverse of the array
    printf("Reversed array: ");
    for (i = n-1; i>=0; i--)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
