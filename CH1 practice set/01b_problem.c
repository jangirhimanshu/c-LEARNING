#include<stdio.h>
int main()
{
    int length ,width,area;
    printf("find area of rectangle\n");
    printf("enter the value of length\n ");
    scanf("%d",&length);
    printf("enter the value of width \n");
    scanf("%d",&width);
    
    printf("area of rectangle is\n%d",length*width);
    return 0;
}