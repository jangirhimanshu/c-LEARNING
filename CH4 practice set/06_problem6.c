//6. Write a program to implement program 5 using ‘for’ and ‘do-while’ loop.
#include <stdio.h>
int main()
{
/*
USING DO WHILE LOOP:
{
    int i = 1, sum = 0;
do
{
    sum=sum+i;
    i++;
} while (i<=10);

    printf("the sum of first ten natural number is:%d",sum);
    return 0;
*/

//USING FOR LOOP:
int sum=0;

for(int i = 1; i <=10 ; i++)
{
    sum=sum+i;
}

    printf("the sum of first ten natural number is:%d",sum);
    return 0;
}