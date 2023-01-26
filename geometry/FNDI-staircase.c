#include <stdio.h>
#include <math.h>

int main()
{
    int N, H, C, L;
    double rampLength;

    while ((scanf("%d", &N)) != EOF)
    {
        scanf("%d%d%d", &H, &C, &L);
        rampLength = N * sqrt((H * H) + (C * C));
        printf("%.4f\n", (rampLength * L) / (100.0 * 100));
    }

    return 0;
}