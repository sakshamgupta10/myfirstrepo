#include <stdio.h>

int main()
{
    int n,s1=0,s2=0,s3=0;
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
            s1+=a[i][j];
            
             if(i>=j)
            s2+=a[i][j];
            
             if(i==j)
            s3+=a[i][j];
            
        }
    }
    
    printf("The value of sum of ascii values of upper triangular part of matrix is %d \n",s1);
    
    printf("The value of sum of ascii values of lower triangular part of matrix is %d \n",s2);

    printf("The value of sum of diagonal elements is %d ",s3);

    return 0;
}