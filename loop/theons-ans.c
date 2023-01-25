#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    int arr[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    int low = arr[0], flag = 0;
    for (int i = 1; i < N; i++)
    {
        if (arr[i] < low)
        {
            low = arr[i];
            flag = i;
        }
    }

    printf("%d\n", flag + 1);

    return 0;
}