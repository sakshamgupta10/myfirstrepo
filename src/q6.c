#include <stdio.h>

void powerModifier(int a[], int n)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]%4==0)
        {
            a[i]=a[i]*a[i];
        }
        else if(a[i]%3==0)
        {
            a[i]=a[i]*a[i]*a[i];
        }
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
    
    powerModifier(a,n);
    
    printf("modified array is \n");
    for(int i=0;i<n;i++)
    {
        printf("%d \n",a[i]);
    }
}