#include <stdio.h>
int main()
{
    int T, i, ans = 0;
    scanf("%d", &T);
    int R[T];

    for (i = 0; i < T; i++)
    {
        scanf("%d", &R[i]);
    }

    for (i = 0; i < T; i++)
    {
        if (R[i + 1] < R[i])
        {
            ans = i + 2;
            break;
        }
    }
    printf("%d\n", ans);

    return 0;
}