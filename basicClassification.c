#include <stdio.h>
#include "NumClass.h"

 
    int isPrime(int x)
    {
    	
    	for(int i=2;i<=x/2;i++)
    	{
    		if(x%i==0)
            {
    		    return 0;
            }
    	}
    	return 1;
    }
    //factorial of the digit
    int factorial(int x) 
    {
   int i = 1;
   while(x>1) {
      i = i * x;
      x--;
    }
   return i;
    }
int isStrong(int n)
 {
   int temp, k, result = 0;
   temp = n;
   while(temp) {
      k = temp % 10;
      result = result + factorial(k);
      temp = temp/10;
   }
   if (result == n)
      return 1;
   else
      return 0;
}