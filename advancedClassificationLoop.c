#include "NumClass.h"
#include <math.h>

int isPalindrome(int x){
    int originalnumber=x;
    int i=0;
    for (int x ; x>0 ; x/10)
    {
        i=i+(x%10);
        i=i*10;

    }
    if (originalnumber==i)
    {
        return 1;
    }
    return 0;
}

int isArmstrong(int x){
    int originalnumber;
    originalnumber=x;
    int digits=0;
    int sum=0;
    while (x>0)
    {
        digits=digits+1;
        x=x/10;
    }
    while (x>0)
    {
      
        int f=x%10;
        int s=pow(f,digits);
        sum=sum+s;
        x=x/10;
    }
    if (sum=originalnumber)
    {
        return 1;
    }
    return 0;
}