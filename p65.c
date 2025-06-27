//given an int number, check the number is adam number or not
//adam number is a number which is equal to the reverse of its square and it self
//ex:12 ->rev=21, 12^2=144, 21^2=441, 441 rev 144
#include <stdio.h>
#define square(n) ((n) * (n))
int scan() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    return n;
}
int reverse(int n) {
    int rev = 0;
    while (n) {
        int rem = n % 10;
        n /= 10;
        rev = rev * 10 + rem;
    }
    return rev;
}
int is_adam(int n)
{
    int s1=square(n);
    int r1=reverse(n);
    int s2=square(r1);
    int r2=reverse(s1);
    int r3=reverse(s2);
    if((s1==r3)&&(s2==r2)) return 1; // Adam number
    else return 0; // Not an Adam number

}
/*int is_adam(int n) {
    int square = n * n;
    int rev_square = reverse(square);
    int rev_n = reverse(n);
    return (rev_square == rev_n * rev_n);
}*/
int main() {
    int n = is_adam(scan());
    printf(n ? "Adam number\n" : "Not an Adam number\n");
    
}