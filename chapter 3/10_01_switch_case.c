#include <stdio.h>

int main(){
    int a;
    printf("Enter a: ");
    scanf("%d", &a);

    switch(a){
        case 1:
            printf("You entered 1\n");
            
        case 2:
            printf("You entered 2\n");
            
        case 3:
            printf("You entered 3\n");
            
        case 4:
            printf("You entered 4\n");
            
        default:
            printf("Nothing matched");
    }
    return 0;
}
/* agar jo case number enter karte hai to uske statement sath or niche ke sare statement print hote hai... 
output:
Enter a: 2
You entered 2
You entered 3     
You entered 4
Nothing matched
*/
/*
   agar jo case number enter kiya hai usi ka statement print karvana hai to break function use karna hoga.. as shown in 10_02_switch_case.c
*/