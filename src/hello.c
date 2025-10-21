#include <stdio.h>
int main() 
{
        int n,j,c=1;
        

        printf("Enter a number: ");
        scanf("%d", &n);
      
        for(int i=1;i<=n;i++)
        {
            for(j=1;j<=i;j++)
            {
                printf("%d ", c);
                c++;

            }
           printf("\n");
        }

        
float x = 4.6;
double y = 4.6;
if(x == y) printf("Equal");
else if(x > y) printf("x > y");
else if(x < y) printf("x < y");
else printf("x not equal to y");



    
        return 0;
    }

