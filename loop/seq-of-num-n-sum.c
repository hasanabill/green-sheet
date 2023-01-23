#include <stdio.h>

int main()
{
    int M, N, i, temp, sum;

    while (1)
    {
        scanf("%d%d", &M, &N);
        sum = 0;
        if (M <= 0 || N <= 0)
        {
            break;
        }

        if (M < N)
        {
            temp = M;
            M = N;
            N = temp;
        }
        for (i = N; i <= M; i++)
        {
            sum += i;
            printf("%d ", i);
        }
        printf("Sum=%d\n", sum);
    }

    return 0;
}