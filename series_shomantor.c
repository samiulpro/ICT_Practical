#include <stdio.h>

int main() {
    int sum = 0;
    for (int i = 5; i <= 500; i += 5)
        sum += i;
    printf("Sum of series: %d\n", sum);
    return 0;
}
