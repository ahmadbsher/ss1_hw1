#include "NumClass.h"


int isPrime(int x){
    for (int i = 2; i < x; i++)
    {
        if (x%i==0)
        {
            return 0;
        }
    }
    return 1;
    
}

int isStrong(int x){
    int sum=0;
    int m=1;
    while (x>0)
    {
        for ( int i = 1; i <= x%10; i++)
        {
            m=m*i;
        }
        sum=sum+m;
        m=1;   
    }
    if(sum==x){
        return 1;
    }
    return 0;
    
    
    
}