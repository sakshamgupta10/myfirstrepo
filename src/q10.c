#include <stdio.h>

void charFreq(char a[],int n)
{
    int c=1;
    for(int i=0;i<n;i++)
    {
        if (a[i] == '\0' || a[i] == ' ')  
            continue;
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                c++;
                a[j]='\0'; //so that next time same letter comes itll be taken as null and wont be counted
            }
        }
        printf("%c occurs %d times \n",a[i],c);
        c=1;
    }
}

int main() 
{
    char a[200];
    printf("enter string\n");
    gets(a);
    
    int i=0,c=0;
    while(a[i]!='\0')
    {
        if(a[i]>='A' && a[i]<='Z')
        {
            a[i]=a[i]+32;
        }
        i++;
        c++;
    }
    
    charFreq(a,c);
    
    return 0;
}