#include <stdio.h>
int main()
{
    int i, n, m;
    char a;
    int sumC = 0, sumR = 0, sumS = 0, sumTotal;
    double pC, pR, pS;
    scanf("%d", &m);
    for (i = 1; i <= m; i++)
    {
        scanf("%d %c", &n, &a);
        if ('C' == a)
            sumC += n;
        if ('R' == a)
            sumR += n;
        if ('S' == a)
            sumS += n;
    }
    sumTotal = sumC + sumR + sumS;
    pC = (sumC / (sumTotal * 1.0)) * 100.00;
    pR = (sumR / (sumTotal * 1.0)) * 100.00;
    pS = (sumS / (sumTotal * 1.0)) * 100.00;
    printf("Total: %d cobaias\n", sumTotal);
    printf("Total de coelhos: %d\n", sumC);
    printf("Total de ratos: %d\n", sumR);
    printf("Total de sapos: %d\n", sumS);
    printf("Percentual de coelhos: %.2lf %%\n", pC);
    printf("Percentual de ratos: %.2lf %%\n", pR);
    printf("Percentual de sapos: %.2lf %%\n", pS);
}