#include <stdio.h>

int main()
{
    char str[27];
    int N, i;

    while (scanf("%s", &str) != EOF)
    {
        scanf("%d", &N);
        int arr[N];
        for (i = 0; i < N; i++)
            scanf("%d", &arr[i]);
        for (i = 0; i < N; i++)
            printf("%c", str[arr[i] - 1]);
        printf("\n");
    }

    return 0;
}