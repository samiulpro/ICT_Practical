#include <stdio.h>
#include <math.h>

void area_two_sides()
{
    float a , b , area;
    printf("Enter values:\n");
    printf("a= ");
    scanf("%f", &a);
    printf("b= ");
    scanf("%f", &b);
    area = 0.5 * a * b;
    printf("Area = %f\n", area);
}

int main() {
    area_two_sides();
    return 0;
}
