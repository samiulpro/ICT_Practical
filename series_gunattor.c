#include <stdio.h>

unsigned long long factorial(int n) {
    unsigned long long fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

int main() {
    int N;
    printf("Enter N: ");
    scanf("%d", &N);
    printf("Factorial: %llu\n", factorial(N));
    return 0;
}
