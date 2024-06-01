#include <stdio.h>

int main() {
    int dividend, divisor;

    // Prompt the user for the dividend and divisor
    printf("dividend: ");
    scanf("%d", &dividend);
    printf("divisor: ");
    scanf("%d", &divisor);

    // Check if divisor is zero to avoid division by zero
    if (divisor == 0) {
        printf("Floating point exception\n");
        return 1; // Exit the program with an error code
    }

    // Compute the floored quotient and remainder
    int floored_quotient = dividend / divisor;
    int remainder = dividend % divisor;

    // Compute the floating-point quotient
    float quotient = (float)dividend / divisor;

    // Print the results
    printf("floored quotient: %d\n", floored_quotient);
    printf("remainder: %d\n", remainder);
    printf("quotient: %.3f\n", quotient);

    return 0; // Exit the program successfully
}