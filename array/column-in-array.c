#include <stdio.h>

int main()
{
    double M[12][12], sum = 0.0;
    int i, j, C;
    char T[2];

    scanf("%d %s", &C, &T);

    for (i = 0; i < 12; i++)
        for (j = 0; j < 12; j++)
            scanf("%lf", &M[i][j]);

    for (i = 0; i < 12; i++)
        sum += M[i][C];

    if (T[0] == 'S')
        printf("%.1lf\n", sum);
    else if (T[0] == 'M')
        printf("%.1lf\n", sum / 12.0);
    return 0;
}