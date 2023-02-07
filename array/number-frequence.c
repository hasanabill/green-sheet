#include <stdio.h>
int main()
{
    int arr[2010] = {0};
    int i, N, x;

    scanf("%d", &N);
    for (i = 0; i < N; i++)
    {
        scanf("%d", &x);
        arr[x]++;
    }

    for (i = 1; i < 2000; i++)
    {
        if (arr[i] > 0)
            printf("%d apparece %d vez (es)\n", i, arr[i]);
    }
    return 0;
}