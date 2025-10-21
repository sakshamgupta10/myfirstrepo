#include <stdio.h>

int main()
{
    int n;
    printf("enter size of array \n");
    scanf("%d",&n);
    
    char a[n][n];
    
    printf("enter characters in array \n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf(" %c",&a[i][j]);
        }
    }
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(j>=i)
            {
                if(a[i][j]>='a' && a[i][j]<='z')
                a[i][j]=a[i][j]-32;
                
                else if(a[i][j]>='A' && a[i][j]<='Z')
                a[i][j]=a[i][j]+32;
            }
            
             if(i>=j)
            {
                if(a[i][j]>='a' && a[i][j]<='z')
                a[i][j]=a[i][j]-32;
                
                else if(a[i][j]>='A' && a[i][j]<='Z')
                a[i][j]=a[i][j]+32;
            }
            
             if(i==j)
            {
                if(a[i][j]>='a' && a[i][j]<='z')
                a[i][j]=a[i][j]-32;
                
                else if(a[i][j]>='A' && a[i][j]<='Z')
                a[i][j]=a[i][j]+32;
            }
            
        }
    }
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf(" %c",a[i][j]);
        }
    }
    
   

    return 0;
}