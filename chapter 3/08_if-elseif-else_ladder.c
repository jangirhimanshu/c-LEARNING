#include <stdio.h>

int main(){
    int age = 45;

    if(age>60){                                              // uper se niche jate samay jo first condition true hogi usi ka statement print hoga
        printf("You can drive and you are a senior citizen");// agar jo condition true hai uske niche ki condition bhi true hai to usi ka statement print nhi hoga    
    }                                                                       
    else if(age>40){                              // example:else if(age>40) is true and else if(age>18) is also true but  
        printf("You can drive and you are elder");// it can print only You can drive and you are elder
    }                                             // because else if(age>40) ye uper ki ondition hai
    else if(age>18){
        printf("You can drive");
    }
    else{
        printf("You cannot drive");
    }


    return 0;
}