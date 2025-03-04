// 10. Write a program to check whether a given number is prime or not using loops

#include <stdio.h>
int main()
{
    int n;
    int not_prime = 0;
    printf("enter n:");
    scanf("%d", &n);
    // agar {not_prime = 0(false)} hai to prime hai and {not_prime = 1(true)} hai to prime nhi hai..
    // not_prime = 1 is true hai to prime nhi hai and not_prime = 0 is false hai to prime hai
    // 1 means true and 0 means false.
    if (n == 0 || n == 1)
    {
        not_prime = 1; //{not_prime = 1(true)} means agar {n ki value 1(n==1)} ya {n ki value 0(n==0)} koi ek condition true hai to prime no. nhi hai.
    }                  // aur apane ko pata hai ki 0,1 dono prime no. nhi hai...
    else
    {
        for (int i = 2; i < n; i++) // i = 2 se start karna hai kyuki 0 aur 1 ke liye upper code likha hai...
        {
            if (n % i == 0 && n != 2)
            {
                not_prime = 1;
                break;
            }
        }
    }
    
    if (not_prime)
    {
        printf("%d is not prime", n);
    }
    else
    {
        printf("%d is prime", n);
    }

    return 0;
}
