// Online C compiler to run C program online
#include <stdio.h>

void reverseOrIncrement(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        int num=a[i];
        int t=num;
        int rev=0,c=1;
        
        while(t>0)
        {
            int d=t%10;
            rev=rev*10+d;
            t/=10;
        }
        
        for(int i=2;i<=num/2;i++)
        {
            if(num%i==0)
            {
               c=0;
               break;
            }
        }
        
        if(c==1)
        {
            num=num+10;
        }
        else if(num%7==0)
        {
            num=rev;
        }
        
        a[i]=num;
    }
}


int main() 
{
   int n;
   printf("enter size of array \n");
   scanf("%d",&n);
   
   int a[n];
   
   printf("enter array elements \n");
   for(int i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   
   reverseOrIncrement(a,n);
   
   printf("\n modified array is \n");
   for(int i=0;i<n;i++)
   {
       printf("%d \t",a[i]);
   }

    return 0;
}