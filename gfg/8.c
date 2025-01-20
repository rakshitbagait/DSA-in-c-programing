// Given n, count all ‘a’ and ‘b’ that satisfy the condition a^3 + b^3 = n. Where (a, b) and (b, a) are considered two different pairs

// Examples: 

// Input: n = 9
// Output: 2
// Explanation: 1^3 + 2^3 = 9 and 2^3 + 1^3 = 9


// Input: n = 28
// Output: 2
// Explanation: 1^3 + 3^3 = 28 and 3^3 + 1^3 = 28


#include <stdio.h>
#include <math.h>

// Function to count valid pairs
int count_pairs(int n) {
    int count = 0;
    int max_limit = (int)pow(n, 1.0/3.0) + 1;  // Maximum value for a and b

    for (int a = 0; a <= max_limit; a++) {
        int a_cube = a * a * a;  // a^3

        if (a_cube > n) {
            break;  // If a^3 exceeds n, break the loop
        }

        int b_cube = n - a_cube;  // b^3 = n - a^3
        int b = round(pow(b_cube, 1.0 / 3.0));  // Calculate b from b^3

        // Check if b^3 is exactly equal to the remaining value
        if (b * b * b == b_cube) {
            if (a != b) {
                count += 2;  // (a, b) and (b, a) are distinct
            } else {
                count += 1;  // (a, a) is counted only once
            }
        }
    }

    return count;
}

int main() {
    int n;

    // Input the value of n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Call the function to count valid pairs
    int result = count_pairs(n);

    // Output the result
    printf("Output: %d\n", result);

    return 0;
}
