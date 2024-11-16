#include <stdio.h>

int main(){
    // int a = 2342354; <<-- if we use a=2342354 then we get remainder is 95 
    int a = 3349895;
    printf("The value of a%97 is %d", a%97);// % (modular division operator) is use to get remainder and remainder zero aaye to divisible hai..
    return 0;
}