#include <stdio.h>

void patternFilter(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        int num=a[i];
        int t=num,rev=0,s=0,c=0;
        
        while(t>0)
        {
            int d=t%10;
            rev=rev*10+d;
            s+=d;
            c++;
            t/=10;
        }
        
        if(rev==num)
        {
            a[i]=s;
        }
        else if(num%2!=0 && num%3==0)
        {
            a[i]=c;
        }
    }
}
int main()
{
    int n;
    printf("enter size of array \n");
    scanf("%d",&n);
    
    int a[n];
    
    printf("enter elements of array \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    patternFilter(a,n);
    
    printf("\n modified array is \n");
    for(int i=0;i<n;i++)
    {
        printf("%d \t",a[i]);
    }
    
    return 0;
}