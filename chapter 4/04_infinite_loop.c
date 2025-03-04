#include<stdio.h>
int main()
{
int i=0;
while(2<10)  // agar condition (2<10) ye hai or i++ lagayaa hai to i ki value to increase ho gi 1 se but condition always true ho gi,to infinite loop chalega..
// for infinite loop we use also (i<10) but also remove of i++ for condition (i<10) then its makes infinite loop..
{
    printf("the value of i is %d\n",i);
      i++;  //  i++;  also write as i=i+1  ; // agar condition (i<10) hai or i++ nhi lagate to infinite loop bane ga...
}

    return 0;

}
