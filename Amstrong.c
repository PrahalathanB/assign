#include<stdio.h>
#define max 100
void armstrng(int[],int);
void main()
{
       int a[max], n, i=0;
       scanf("%d", &n);
       for(i=0; i<n; i++)
       {
              scanf("%d",&a[i]);
        }
        armstrng(a,n);
}
void armstrng(int a[max],int n)
{
        int i=0, temp, sum=0, rem, c=0;
        for(i=0; i<n; i++)
        {
              sum=0;
              temp=a[i];
              while(a[i]!=0)
              {
                      rem=a[i]%10;
                      sum=sum+rem*rem*rem;
                      a[i]=a[i]/10;
               }
               if(temp==sum)
               {
                       printf("Yes\n");
              }
              else{
                printf("No\n");
              }
        }
}