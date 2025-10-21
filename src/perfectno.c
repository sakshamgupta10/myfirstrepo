#include <stdio.h>
#include <stdbool.h>
int main() 
{
        int n,j=0;        

        printf("Enter a number: \n");
        scanf("%d", &n);
      

        for(int i=1;i<n;i++)
        {
          if(n%i==0)
          {
            j+=i;
          }
        }

        if(n==j)
        {
            printf("%d is a perfect number.\n", n);
        }
        else
        {
            printf("%d is not a perfect number.\n", n);
        }

        bool s;
        int a=5,b=10;

        s=a<b;
        printf("%d\n",s);

    

        int a1=5,b1=2;
        int c;
        c=a1++ + ++b1;
        printf("%d %d %d", a1, b1, c);
        return 0;
    }

