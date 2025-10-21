#include <stdio.h>

int main()
{
    int n,s=0;
    printf("Enter an integer: ");
    scanf("%d", &n);

    while(n>0)
    {
        int d=n%10;
        s+=d;
        n/=10;

        if(n==0 && s>9)
        {
            n=s;
            s=0;
        }
    }

    printf("The generic root is: %d", s);
    return 0;
}