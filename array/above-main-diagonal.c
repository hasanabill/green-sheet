#include <stdio.h>

int main()
{
    double M[12][12], sum = 0.0;
    int i, j, n = 1;
    char T[2];

    scanf("%s", &T);

    for (i = 0; i < 12; i++)
        for (j = 0; j < 12; j++)
            scanf("%lf", &M[i][j]);

    for (i = 0; i < 12; i++)
    {
        for (j = n; j < 12; j++)
        {
            sum += M[i][j];
        }
        n++;
    }

    if (T[0] == 'S')
        printf("%.1lf\n", sum);
    else if (T[0] == 'M')
        printf("%.1lf\n", sum / 66.0);
    return 0;
}