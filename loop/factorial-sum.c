#include <stdio.h>

int main()
{
    int M, N, i, j;
    long long int factM, factN;

    while (scanf("%d %d", &M, &N) != EOF)
    {
        factM = 1;
        factN = 1;
        for (i = 1; i <= M; i++)
        {
            factM *= i;
        }
        for (i = 1; i <= N; i++)
        {
            factN *= i;
        }
        printf("%lld\n", factM + factN);
    }

    return 0;
}