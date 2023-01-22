#include <stdio.h>

int main()
{
    int M, N, i;

again:
    scanf("%d%d", &M, &N);

    int sum = 0;
    if (!(M <= 0 || N <= 0))
    {
        for (i = N; i <= M; i++)
        {
            sum += i;
            printf("%d ", i);
        }
        printf("Sum=%d\n", sum);
        goto again;
    }
    return 0;
}