// https://www.cs.cmu.edu/~pattis/15-1XX/common/handouts/ascii.html   <--- all ascii values link

// 97 to 122   <--- ASCII VALUE range of lowercase(a to z) character
// 65 to 90    <--- ASCII VALUE range of uppercase(A to Z) character 

#include <stdio.h>

int main(){
    char ch ;
    printf("enter character:%c",ch);
    scanf("%c",&ch);
    printf("The value of character is %d\n", ch);
    // 97 to 122   <--- range of lowercase(a to z) character
    if(ch >= 97 && ch<=122){
        printf("This character is lowercase\n");
    }
    else{
         printf("This character not lowecase \n");
    }
    return 0;
}
