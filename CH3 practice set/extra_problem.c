#include <stdio.h>
int main()
{
    float maths, phy, chem, tm, percentage;

    printf("enter maths marks :");
    scanf("%f", &maths);

    printf("enter phy marks :");
    scanf("%f", &phy);

    printf("enter chem marks :");
    scanf("%f", &chem);

    tm = maths + phy + chem;
    percentage = (tm / 300) * 100;

    printf("total marks:%f\n", tm);
    printf("percentage:%f percentage\n", percentage);

    /*
    above 4 line aslo write as

    printf("total marks:%f\n",tm = maths + phy + chem);
    printf("percentage:%f percentage\n",percentage = (tm / 300) * 100);

    */

    if (percentage >= 33 && percentage <= 100)
    {
        printf("PASSED,\nparty kar");
    }

    else
    {
        printf("failed,\nbetter luck next time");
    }

    return 0;
}