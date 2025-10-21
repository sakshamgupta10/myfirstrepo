#include <stdio.h>

int main()
{
    int n;
    printf("enter dimension of array");
    scanf("%d", &n);

    int a[n][n];

    printf("enter elements of array");

    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            scanf("%d", &a[i][j]);

            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {
                  int temp = a[i][i];
                  a[i][i] = a[i][n - 1 - i];
                  a[i][n - 1 - i] = temp;
                }
            }

            printf("the modified array is:\n"); 
            for(int i=0; i<n; i++)
            {
                for(int j=0; j<n; j++)
                {
                    printf("%d ", a[i][j]);
                }
                printf("\n");
            }
}