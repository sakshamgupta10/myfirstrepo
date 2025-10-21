#include <stdio.h>
int main()
{
    int n[5];

    int i;

    for(i=0;i<5;i++)
    {
        n[i]=i++;
        printf("%d ",n[i]);
    }
    return 0;
}