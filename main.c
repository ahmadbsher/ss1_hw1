#include <stdio.h>
#include "NumClass.h"
#include "basicClassification.c"
#include "advancedClassificationLoop.c"
#include "advancedClassificationRecursion.c"
int main()
{
    
    int a;
    scanf("%d",&a);
    
    int b;
    scanf("%d",&b);
    printf("the Armstrong numbers are:");
    for(int i=a; i<b;i++)
    {
         if(isArmstrong(i)==1)
         {
            printf("%d ",i);
         }
        
    }
 
     printf("\nthe palindrome numbers are:");
    for(int i=a; i<b;i++)
    {
         if(isPalindrome(i)==1)
         {
            printf("%d ",i);
         }
        
    }
     printf("\nthe prime numbers are:");
    for(int i=a; i<b;i++)
    {
         if(isPrime(i)==1)
         {
            printf("%d ",i);
         }
        
    }
     printf("\nthe strong numbers are:");
    for(int i=a; i<b;i++)
    {
         if(isStrong(i)==1)
         {
            printf("%d ",i);
         }
        
    }
     printf("\n");
    return 0;
}
 