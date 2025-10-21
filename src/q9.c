#include <stdio.h>

void primeCompositeSwitch(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int num = a[i];
        int t = num;
        int c = 1; // assume prime

        // check if prime
        if (t < 2)
            c = 0;
        else
        {
            for (int j = 2; j <= t / 2; j++)
            {
                if (t % j == 0)
                {
                    c = 0; // composite
                    break;
                }
            }
        }

        // if prime → next prime
        if (c == 1)
        {
            for (int next = num + 1;; next++)
            {
                int k;
                for (k = 2; k <= next / 2; k++)
                    if (next % k == 0)
                        break;
                if (k > next / 2)
                {
                    a[i] = next;
                    break;
                }
            }
        }

        // if composite → previous composite
        else if (num > 3)
        {
            for (int prev = num - 1; prev > 3; prev--)
            {
                int k;
                for (k = 2; k <= prev / 2; k++)
                    if (prev % k == 0)
                        break;
                if (k <= prev / 2) // found composite
                {
                    a[i] = prev;
                    break;
                }
            }
        }
    }
}

int main()
{
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter array elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    primeCompositeSwitch(a, n);

    printf("\nModified array: ");
    for (int i = 0; i < n; i++)
        printf("%d\t", a[i]);

    return 0;
}
