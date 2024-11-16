#include <stdio.h>

int main()
{
    int year;
    printf("Enter year: \n");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)   // <---- leap year formula is given below  // != <-- not equal to
    {                                                                                                       // ==  <--- equal to  
        printf("This is a leap year");
    }
    else
    {
        printf("This is not a leap year");
    }

    return 0;
}

/*
Leap Year Formula:
A year is a leap year if:

It is divisible by 4 AND:
It is not divisible by 100   
OR
It is divisible by 400.
*/

// OR ke pehele vali condition ya baad vali condition koi ek sahi honi chahiye to vo leap year hai.....