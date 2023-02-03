#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    int arr[N], i;
    arr[0] = 0;
    arr[1] = 1;
    for (i = 2; i < N; i++)
    {
        arr[i] = arr[i - 2] + arr[i - 1];
    }
    for (i = 0; i < N - 1; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("%d\n", arr[N - 1]);

    return 0;
}