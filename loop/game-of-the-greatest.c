#include <stdio.h>

int main()
{
    int A, B, N, i, j, AS, BS;

    while (scanf("%d", &N) && N != 0)
    {
        AS = 0;
        BS = 0;

        for (int i = 0; i < N; i++)
        {
            scanf("%d%d", &A, &B);
            if (A > B)
                AS++;
            else if (A < B)
                BS++;
        }
        printf("%d %d\n", AS, BS);
    }

    return 0;
}