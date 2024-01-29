#include "NumClass.h"
#include <math.h>

int digits(int x){
    int d=1;
    while (x>9)
    {
        d=d+1;
        x=x/10;
    }
    return d;   
}

int reverse(int x){
    int d=digits(x);
    if (x==0)
    {
        return 0;
    }
    return((x%10)*pow(10,d-1)+reverse(x/10));
}

int isPalindrome(int x){
    if (x==reverse(x))
    {
        return 1;
    }
    return 0;
}

int isArmstrongR(int x){
    int sum=0;
    int d=digits(x);
    while (x>0)
    {
        return(sum+pow(x%10,d)+isArmstrongR(x/10));
    }
    return 0;
}

int isArmstrong(int x){
    if (x==isArmstrongR(x))
    {
        return 1;
    }
    return 0;
    
}
