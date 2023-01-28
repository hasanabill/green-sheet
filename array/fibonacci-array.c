#include <stdio.h>

int main()
{
    int i;
    long long N[61];
    N[0] = 0;
    N[1] = 1;
    for (i = 2; i < 61; i++)
    {
        N[i] = N[i - 1] + N[i - 2];
    }
    int T, X;
    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        scanf("%d", &X);
        printf("Fib(%d) = %lld\n", X, N[X]);
    }

    return 0;
}