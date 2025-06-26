#include<stdio.h>
union aa
{
float avg;
int rno;
char name;

}a;
struct aa
{
float avg;
int rno;
char name;

}b;
void main()
{
struct student b;
union student a;
    printf("size of union %ld",sizeof(a));
    printf("size of struct %ld",sizeof(b));
}
