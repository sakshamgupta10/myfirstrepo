#include <stdio.h>

// Program to identify and print prime numbers from an array

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Prime numbers in the array are: ");
    for (int i = 0; i < n; i++) {
        int num = arr[i];
        int isPrime = 1;  // assume prime

        if (num <= 1) {
            isPrime = 0;
        } else {
            for (int j = 2; j <= num/2; j++) {
                if (num % j == 0) {
                    isPrime = 0;
                    break;
                }
            }
        }

        if (isPrime) {
            printf("%d ", num);
        }
    }

    return 0;
}
