#include <stdio.h>

int main()
{
    float x;
    scanf("%f", &x);

    if (x >= 0 && x <= 400)
    {
        printf("Novo salario: %.2f\n", x + (x * 0.15));
        printf("Reajuste ganho: %.2f\n", x * 0.15);
        printf("Em percentual: %d %%\n", 15);
    }
    else if (x >= 400 && x <= 800)
    {
        printf("Novo salario: %.2f\n", x + (x * 0.12));
        printf("Reajuste ganho: %.2f\n", x * 0.12);
        printf("Em percentual: %d %%\n", 12);
    }
    else if (x >= 800 && x <= 1200)
    {
        printf("Novo salario: %.2f\n", x + (x * 0.10));
        printf("Reajuste ganho: %.2f\n", x * 0.10);
        printf("Em percentual: %d %%\n", 10);
    }
    else if (x >= 1200 && x <= 2000)
    {
        printf("Novo salario: %.2f\n", x + (x * 0.07));
        printf("Reajuste ganho: %.2f\n", x * 0.07);
        printf("Em percentual: %d %%\n", 7);
    }
    else if (x >= 2000)
    {
        printf("Novo salario: %.2f\n", x + (x * 0.04));
        printf("Reajuste ganho: %.2f\n", x * 0.04);
        printf("Em percentual: %d %%\n", 4);
    }

    return 0;
}
