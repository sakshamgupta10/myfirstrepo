#include <stdio.h>

int main()
{
    int a,b,c,lcm; 
    printf("enter three numbers");
    scanf("%d %d %d",&a,&b,&c);
    lcm=(a>b)?((a>c)?a:c):((b>c)?b:c);
    while(1)            
    {
        if(lcm%a==0 && lcm%b==0 && lcm%c==0)
        {
            printf("lcm of %d %d %d is %d",a,b,c,lcm);
            break;
        }
        ++lcm;
    }
    return 0;
}