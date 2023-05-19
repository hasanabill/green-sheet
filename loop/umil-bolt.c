#include <stdio.h>

int main()
{
    int t, i;
    float n, ans;
    while (scanf("%d", &t) != EOF)
    {
        ans = 100;
        while (t--)
        {
            scanf("%f", &n);
            if (ans > n)
            {
                ans = n;
            }
        }
        printf("%.2f\n", ans);
    }

    return 0;
}