#include <math.h>
#include <cstdio>

int main()
{
    std::puts("please enter a, b and c for 'a * x * x + b * x + c = 0':");

    float a = 0;
    float b = 0;
    float c = 0;
    std::scanf("%f %f %f", &a, &b, &c);

    float x1 =((- b) + sqrt(b * b - 4 * a * c))/ 2 * a;
    float x2 =((- b) - sqrt(b * b - 4 * a * c))/ 2 * a;
    std::printf("solution: x1 = %f, x2 = %f", x1, x2);
}