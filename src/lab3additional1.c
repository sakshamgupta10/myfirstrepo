#include <stdio.h>

int main()
{
    int n,s=0;
    printf("Enter an integer: ");
    scanf("%d", &n);

    int num=n;
    while(num>0)
    {
        int f=1;
        int d=num%10;

        for(int i=1;i<=d;i++)
        {
            f*=i;
        }

        s+=f;
        f=0;
        num/=10;

    }

    if(s==n)
        printf("Strong Number");
    else
        printf("Not a Strong Number");

        return 0;
}