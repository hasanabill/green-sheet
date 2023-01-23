#include <stdio.h>

int main()
{
    int X, Y, i, count = 0;
    scanf("%d%d", &X, &Y);

    for (i = 1; i <= Y; i++)
    {
        count++;
        if (count == X)
        {
            count = 0;
            printf("%d\n", i);
        }
        else
            printf("%d ", i);
    }
    return 0;
}