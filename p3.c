//we use the conditional statments to use in making desitions
/*
types:
simple if:-when we have a single codition (if true should exe block)
if else
else if ladder
switch case
ternary operator
condition:-it is a mathematical expersion which will be evaluated for turuthy or false value otherwise the block will be skiped
truthy values:-any non zero values & will evaluate to true when put under conditon
false values:-these are the values which evaluate to false  when put under condition 
variables always points to the value or location
if-else:used whenever we have two different block of code that should be controled on the singke condition
NOTE:else never has a condition
else -if ladder:-used when ever we are having more than two blocks of code and each block is having its own condition 
else if ladder can carry else block at the end
for else if ladder time complexity is O(1) where n is the number of conditions
and the worst O(n) where n is the number of conditions
for else if ladder the conditions are writen in decreasing order of priority
switch case:-used whenever the end condition values anticipated(gussed)
the expected  end values are writen in the case values
the case values should be unique.after every case break is given to avoid case overflow 
all failing cases are handled by default case
the switch case is used to avoid the else if ladder
default case is not madatory writen at the end of the switch case
if the brake is not written then the case overflow will occurs until break is found or swith block ends
ranges in switch :
the case values can also be range as...but for writing range we need to follow syntax 
syntax:upper_limit<space>...<space>lower_limit
the space on the upper limit side is mandatory but the space on the lower limit side is  not mandatory
nested if :used whenever there are multiple conditions
maximum only 3 levels of nesting is sugested and  any more if required will go to negative approch
ternary operator:
syntax: stm1 ? stm2 : stm3;
the statement 1 is the condition which will be evaluated for true or false value
the statement 2 is used for writing what should happen if the stm1 is true
statement 3 is used for writing what should happen if the stm1 is false
it is also used for value assignment based on the condition
syntax: variable = condition ? value_if_true : value_if_false;
the statement 1 &3 to be restricted to single line
NOTE:if the if block is having 1 statement and else block is having 1 statement then we can write it using tenary operator
itterative statments:used whenever block of code is to be repeated continously without any intermidiate interuption
formal:
    1)entry control:
      while
      for
      2)exit control:
      do while
informal:goto
goto is used to jump to a specific label in the code
the goto is not recommended to use as it will make the code un readable and un maintainable
every loop has 3 important parts
1)initialization:used to initialize the loop variable 
2)condition:used to check the condition for the loop to be executed
3)increment/decrement:used to increment or decrement the loop variable
while loop:
syntax:
initialization;
while(condition){
statements;
alteration;
}
while loop is prefered when the number of iterations is not known in advance and for loop is prefered when the number of iterations is known or clearly defined
for loop:
also refered as beutified version of while loop
the initialization part is used to initialize the new  variable
in the initialization part n number of variables can be initialized or can be created along with its data type(but all of them should be seperted by comma)
in the alternation part n number of variables can be updated by separating them by comma
in condition part should have a single condition,if need to check multiple conditions then we should use logical operators
syntax:
for(initialization;condition;alteration)
{
statements;
}
*/
#include<stdio.h>
int main()
{
   /* int n1,n2,max;
    printf("enter 2 numbers:");
    scanf("%d %d",&n1,&n2);
   if(n1>=n2)
    printf("%d is large",n1);
    if(n2>=n1)
    printf("%d is large",n2);

   using only one if statment

   int max=n1;
    if(n2>max)
    max=n2;
    printf("%d is large",max);

//without any conditional statments
max=(n1>=n2)*n1 +(n2>n1)*n2;
printf("%d is large",max);*/
int n1,n2,max;
printf("enter a numbers:");
    scanf("%d",&n1);
    //if(n1%2==1) if 0 odd if 1 even so when 1 if block when 0 else block
    //if(n1%2)
    if(n1&1)
    printf("odd");
    else
    printf("even");
}