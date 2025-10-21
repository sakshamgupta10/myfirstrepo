#include <stdio.h>

void digitFilter(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        int num=a[i];
        int t=num;
        int c=0,s=0,p=1;
        
        while(t>0)
        {
            int d=t%10;
            s+=d;
            p*=d;
            c++;
            t/=10;
            
        }
        
        if(c>=3)
        {
            t=s;
        }
        else if(c==2)
        {
            t=p;
        }
        else
        {
            t=num;
        }
        
        a[i]=t;
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
    
    digitFilter(a,n);
    
    printf("modified array is \n");
    for(int i=0;i<n;i++)
    {
        printf("%d \t",a[i]);
    }
    
    return 0;
}