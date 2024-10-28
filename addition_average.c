#include <stdio.h>

int main() {
    float num1, num2, num3, sum, average;
    printf("Enter three numbers: ");
    scanf("%f %f %f", &num1, &num2, &num3);
    sum = num1 + num2 + num3;
    average = sum / 3;
    printf("Sum: %.2f, Average: %.2f\n", sum, average);
    return 0;
}
