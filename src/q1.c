#include <stdio.h>

int freq(char a[], int n, char ch)
{
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == ch)
            c++;
    }
    return c;
}

int main()
{
    char a[100];
    printf("Enter a string: ");
    gets(a);  

    int n = 0;
    while (a[n] != '\0')
        n++;

    printf("\nCharacter frequencies:\n");
    for (int i = 0; i < n; i++)
    {
        int counted = 0;
        for (int j = 0; j < i; j++)
        {
            if (a[i] == a[j])
            {
                counted = 1;
                break;
            }
        }
        if (!counted)
        {
            int c = freq(a, n, a[i]);
            printf("%c occurs %d times\n", a[i], c);
        }
    }

    return 0;
}
