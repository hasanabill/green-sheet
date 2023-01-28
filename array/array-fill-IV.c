#include <stdio.h>

int main()
{
    int i, j = 0, k = 0, l, m, n, par[5], impar[5];
    for (i = 0; i < 15; i++)
    {
        scanf("%d", &n);
        if (n % 2 == 0)
        {
            par[j] = n;
            j++;
            if (j == 5)
            {
                for (l = 0; l < 5; l++)
                {
                    printf("par[%d] = %d\n", l, par[l]);
                    par[l] = 0;
                }
                j = 0;
            }
        }
        else
        {
            impar[k] = n;
            k++;
            if (k == 5)
            {
                for (l = 0; l < 5; l++)
                {
                    printf("impar[%d] = %d\n", l, impar[l]);
                    impar[l] = 0;
                }
                k = 0;
            }
        }
    }
    for (i = 0; i < 5; i++)
    {
        if (impar[i] == 0)
            break;
        printf("impar[%d] = %d\n", i, impar[i]);
    }
    for (i = 0; i < 5; i++)
    {
        if (par[i] == 0)
            break;
        printf("par[%d] = %d\n", i, par[i]);
    }

    return 0;
}