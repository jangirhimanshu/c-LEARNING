#include <stdio.h>
int main()
{
    int i, n;
    printf("where to print a natural number,n=");
    scanf("%d", &n); // mistake &n mai & lagana mat bhulana....
    for (i = 0; i <= n; i++)
    {
        printf("the n natural number is %d", i);
        printf("\n"); //<<----also remove this line for add \n in above line
    }

    return 0;
}
