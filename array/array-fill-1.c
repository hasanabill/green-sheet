#include <stdio.h>

int main()
{
    int V, i;
    scanf("%d", &V);
    int arr[10];
    arr[0] = V;

    for (i = 1; i < 10; i++)
    {
        arr[i] = arr[i - 1] * 2;
    }
    for (i = 0; i < 10; i++)
    {
        printf("N[%d] = %d\n", i, arr[i]);
    }

    return 0;
}