#include<stdio.h>
void main()
{

char *a[30]={'t','o','m'};
/*
printf("%p\n",&a[0]);
printf("%p\n",&a[1]);
printf("%p\n",&a[2]);
printf("%p\n",&a[3]);
printf("%p\n",&a[4]);
printf("%p\n",&a[5]);
printf("%p\n",&a[6]);*/
for (int i = 0; a[i]; i++)
{
   printf("%p\n",&a[i]);

}
printf("%p\n",&a[4]);

}