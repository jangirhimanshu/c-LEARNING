/*7. Write a program to calculate the sum of the numbers occurring in the
multiplication table of 8. (consider 8 x 1 to 8 x 10).*/

#include <stdio.h>
int main()
{
    int n = 8, sum = 0;// it is must important apply int sum=1
    for (int i = 1; i <= 10; i++)
    {
        printf("%dx%d=%d\n", n, i, n * i);
        sum = sum + n * i;
    }
    printf("the sum of table 8 is:%d", sum);
    return 0;
}
/*
#include <stdio.h>
int main()
{
    int sum = 0; // it is must important apply int sum=1
    for (int i = 1; i <= 10; i++)
    {
        printf("%dx%d=%d\n", 8, i, 8 * i);
        sum = sum + 8 * i;
    }
    printf("the sum of table 8 is:%d", sum);
    return 0;
}
*/