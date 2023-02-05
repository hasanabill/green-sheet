#include <stdio.h>

int min(int a, int b)
{
    if (a < b)
        return a;
    else
        return b;
}
int max(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

int main()
{
    int W1, L1, W2, L2, a, b;

    scanf("%d%d%d%d", &W1, &L1, &W2, &L2);
    a = min(W1, L1);
    b = min(W2, L2);
    a += b;
    int x = min(max(W1, L1), max(W2, L2));
    int y = min(a, x);

    printf("%d\n", y * y);
    return 0;
}