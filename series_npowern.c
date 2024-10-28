#include <stdio.h>
#include <math.h>

int main() {
    int N;
    long long sum = 0;  // Using long long to handle large values

    printf("Enter the value of N: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        long long term = pow(i, i);  // Calculate i^i
        sum += term;                 // Add i^i to sum
    }

    printf("Sum of the series: %lld\n", sum);

    return 0;
}
