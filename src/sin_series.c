#include <stdio.h>

// Function to calculate sin(x) using series expansion
int main() {
    double x, sum = 0.0, term;
    int n, i, j;

    // Input
    printf("Enter value of x in radians: ");
    scanf("%lf", &x);
    printf("Enter number of terms: ");
    scanf("%d", &n);

    // Series calculation
    for (i = 0; i < n; i++) {
        int power = 2 * i + 1;

        // calculate x^(2i+1)
        double xp = 1.0;
        for (j = 1; j <= power; j++) {
            xp *= x;
        }

        // calculate factorial(2i+1)
        int fact = 1;
        for (j = 1; j <= power; j++) {
            fact *= j;
        }

        // calculate term = (-1)^i * xp / fact
        if (i % 2 == 0)
            term = xp / fact;
        else
            term = -xp / fact;

        sum += term;
    }

    // Output
    printf("Sin(%.2lf) using series = %.10lf\n", x, sum);

    return 0;
}
