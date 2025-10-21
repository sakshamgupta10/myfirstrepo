#include <stdio.h>

void modifiedArr(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int num = a[i];
        int t = num;
        int rev = 0, sum = 0;

        // Calculate reverse and sum of digits
        while (t > 0)
        {
            int d = t % 10;
            rev = rev * 10 + d;
            sum += d;
            t /= 10;
        }

        // Check if prime
        int isPrime = 1;
        if (num <= 1)
        isPrime = 0;
        else 
        {
            for (int j = 2; j * j <= num; j++) 
            {
                if (num % j == 0)
                {
                    isPrime = 0;
                    break;
                }
            }
        }

        if (isPrime)
        {
            a[i] = sum * sum;       // sum of digits squared
        }
        else if (num % 5 == 0)
        {
            a[i] = rev;             // reverse number
        }
    }
}

int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter the elements of array: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    modifiedArr(a, n);

    printf("\nModified array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
