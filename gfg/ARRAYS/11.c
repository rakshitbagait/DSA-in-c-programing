#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int closestNumber(int n, int m) {
    // find the quotient
    int closest = 0;
    int minDifference = INT_MAX;

    // Check numbers around n
    for (int i = n - abs(m); i <= n + abs(m); ++i) {
        if (i % m == 0) {
            int difference = abs(n - i);

            if (difference < minDifference || 
               (difference == minDifference && abs(i) > abs(closest))) {
                closest = i;
                minDifference = difference;
            }
        }
    }
    return closest;
}

int main() {
    int n = -15, m = 6;
    printf("%d\n", closestNumber(n, m));
    
    return 0;
}
