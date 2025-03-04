/*
1. while loop
*/
/*
SYNTAX:
while (condition is true) {
// Code
// The block keeps executing as long as the condition is true
}
*/

#include <stdio.h>
int main()
{
    int i = 0;
    while (i < 5)       // ye "while (i < 5)"" line pe condition check ho gi agar condition true ho gi to nihce tarminate or print ho ga.. and agar condition false ho ga to tarminate or print nhi ho ga
    {                  
        printf("hellooo\n");  
        i=i+1; // i=i+1 <<-- also write as i++ // i++ se 1 add ho ga i mai fir i ki value 0 nhi rahegi ,har bar i ki value 1 se increase ho gi.
               // fir add hone ke baad i<5 condition check ho gi agar condition true ho gi to wapis loop start ho ga means wapis hellooo print ho ga 
    }          // aur ek baar loop compilete ho ga to usee 1 iitresation compilete ho gaya..
    return 0;
}
/*
note: agar condition false ho ga to tarminate or print nhi ho ga
for eg: 5<5 ye condition false hai to tarminate or print nhi ho ga
*/

/*
• ‘while’ checks the condition & then executes the code.
• ‘do-while’ executes the code & then checks the condition.  very very imp
*/