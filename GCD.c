#include <stdio.h>

// Function to calculate GCD using Euclidean algorithm
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;
     printf("\t\t************\n");
     printf("\t\tGCD bdhan\n");
     printf("\t\t************\n");

    // Input two numbers
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Calculate and display GCD
    int result = gcd(num1, num2);
    printf("GCD of %d and %d is: %d\n", num1, num2, result);

    return 0;
}
