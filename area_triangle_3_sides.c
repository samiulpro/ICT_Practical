#include <stdio.h>
#include <math.h>

void area_three_sides() {
    float a, b, c, s, area;
    while (1)
    {
        printf("Enter three sides of the triangle: ");
        scanf("%f %f %f", &a, &b, &c);
        s = (a + b + c) / 2;
        if (s<a || s<b || s<c)
        {
            printf("Please enter valid inputs\n");
            continue;
        }
        else
        {
            break;
        }
        
    }
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("Area of the triangle (using Heron's formula): %.2f\n", area);
}

int main()
{
    area_three_sides();
    return 0;
}