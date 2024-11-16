#include <stdio.h>
int main()
{
    float maths, phy, chem;

    printf("enter maths marks :");
    scanf("%f", &maths);

    printf("enter phy marks :");
    scanf("%f", &phy);

    printf("enter chem marks :");
    scanf("%f", &chem);

    printf("marks of maths,phy and chem is %f,%f and %f\n", maths, phy, chem);

    if (maths < 33 || phy < 33 || chem < 33)
    {
        printf("You are failed due to less marks in individual subject(s)\n");
    }
    else if ((maths + phy + chem) / 3 < 40)      //  (maths + phy + chem) / 3 <-- ye percentage nikalne ke liye use kiya hai  
    {                                                       // (maths + phy + chem) / 3 ,is same as (maths + phy + chem) / 300 *100
        printf("You are failed due less percentage\n");
    }
    else
    {
        printf("PASSED,\nparty kar");
    }
    return 0;
}

/*
ALSO WRITE AS


#include <stdio.h>
int main()
{
    float maths, phy, chem;

    printf("enter maths marks :");
    scanf("%f", &maths);

    printf("enter phy marks :");
    scanf("%f", &phy);

    printf("enter chem marks :");
    scanf("%f", &chem);

    printf("marks of maths,phy and chem is %f,%f and %f\n", maths, phy, chem);

    if ((maths + phy + chem) / 3 < 40)      //  (maths + phy + chem) / 3 <-- ye percentage nikalne ke liye use kiya hai  
    {                                                       // (maths + phy + chem) / 3 ,is same as (maths + phy + chem) / 300 *100
        printf("You are failed due less percentage\n");
    }
    else
    {
        printf("PASSED,\nparty kar");
    }
    return 0;

}

*/