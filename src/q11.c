#include <stdio.h>

void count(char a[])
{
    int i=0,c1=0,c2=0,c3=0;
    
    while(a[i]!='\0')
    {
        if((a[i]>='A' && a[i]<='Z') || (a[i]>='a' && a[i]<='z'))
        c1++;
        
        else if(a[i]>='0' && a[i]<='9')
        c2++;
        
        else
        c3++;
        
        i++;
    }
    if(c1>c2 && c1>c3)
    {
        printf("the number of letters are highest and the total is %d\n",c1);
    }
    else if(c2>c1 && c2>c3)
    {
        printf("the number of digits are highest and the total is %d\n",c2);
    }
    else
    printf("the number of special characters are highest and the total is %d\n",c3);
}

int main() 
{
    char a[100];
    printf("enter a string\n");
    gets(a);
    
    count(a);
    
    return 0;
}