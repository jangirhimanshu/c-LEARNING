#include <stdio.h>
int main()
{
    int a, b, c, d;
    printf("enter a value of a:\n");
    scanf("%d", &a);

    printf("enter a value of b:\n");
    scanf("%d", &b);

    printf("enter a value of c:\n");
    scanf("%d", &c);

    printf("enter a value of d:\n");
    scanf("%d", &d);

    if (a > b && a > c && a > d)
    {
        printf("a is greater value:%d", a);
    }

    else if (b > a && b > c && b > d)
    {
        printf("b is greater value:%d", b);
    }

    else if (c > a && c > b && c > d)
    {
        printf("c is greater value:%d", c);
    }

    else 
    {
        printf("d is greater value:%d", d);
    }
    return 0;
}