#include <stdio.h>

int main()
{
    int X = 20;
    int N[X], i, temp;

    for (i = 0; i < X; i++)
    {
        scanf("%d", &N[i]);
    }

    for (i = 0; i < 20 / 2; i++)
    {
        temp = N[i];
        N[i] = N[X - 1];
        N[X - 1] = temp;
        X--;
    }

    for (i = 0; i < 20; i++)
    {
        printf("N[%d] = %d\n", i, N[i]);
    }

    return 0;
}