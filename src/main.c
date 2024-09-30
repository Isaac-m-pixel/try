#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, amount;
    int time, n;

    // Input principal, rate, time, and number of compounding periods
    printf("Enter principal amount: ");
    scanf("%lf", &principal);
    printf("Enter annual interest rate (in percentage): ");
    scanf("%lf", &rate);
    printf("Enter time (in years): ");
    scanf("%d", &time);
    printf("Enter number of times interest applied per year: ");
    scanf("%d", &n);

    // Convert rate from percentage to decimal
    rate = rate / 100;

    // Calculate amount
    amount = principal * pow((1 + rate / n), n * time);

    // Output the result
    printf("Amount after %.2f years: %.2f\n", (double)time, amount);
    
    return 0;
}