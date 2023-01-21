#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);

    if ((a + b) % 2 == 0)
    {
        printf("%d\n", 1);
    }
    else
    {
        printf("%d\n", 0);
    }

    return 0;
}