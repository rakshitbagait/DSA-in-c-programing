#include <stdio.h>
#include <stdlib.h>

// Function to find the GCD of two numbers
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
    int num1, num2;

    // Input the 2 numbers
    printf("ENTER THE 2 NUMBERS: ");
    scanf("%d %d", &num1, &num2);

    // Print the GCD of the two numbers
    printf("GCD: %d\n", gcd(num1, num2));

    return 0;
}
