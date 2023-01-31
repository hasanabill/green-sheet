#include <stdio.h>

int main()
{
    int M, N, i, j, count;

    while (scanf("%d%d", &N, &M))
    {
        if (M == 0 && N == 0)
            break;
        int arr[M];
        count = 0;

        for (i = 0; i < M; i++)
        {
            scanf("%d", &arr[i]);
        }

        for (i = 0; i < M; i++)
        {
            for (j = i + 1; j < M; j++)
            {
                if (arr[i] == arr[j])
                {
                    count++;
                }
            }
        }

        printf("%d\n", count);
    }

    return 0;
}