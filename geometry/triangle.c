#include <stdio.h>
int main()
{
    float A, B, C;

    scanf("%f%f%f", &A, &B, &C);

    if ((A + B) > C && (B + C) > A && (A + C) > B)
    {
        printf("Perimetro = %.1f\n", A + B + C);
    }
    else
    {
        printf("Area = %.1f\n", (.5 * (A + B) * C));
    }

    return 0;
}