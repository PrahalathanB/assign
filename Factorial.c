#include<stdio.h>

int factorial(int n)  
{  
  int fact=1;
  if (n<0) {
    return -1;
  }  
  else  {
    for(int i=1;i<=n;i++)
      fact*=i;
    return fact;
  }
}  
   
int main()  
{  
  int number;  
  int fact;  
  scanf("%d", &number);     
  fact = factorial(number);  
  printf("%d",fact);  
  return 0;  
}  