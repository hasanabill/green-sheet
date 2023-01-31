#include <stdio.h>
int main()
{
    int N, X, i, j, flag;
    scanf("%d", &N);
    for (i = 0; i < N; i++)
    {
        scanf("%d", &X);
        flag = 0;
        for (j = 1; j <= X; j++)
        {
            if (X % j == 0)
                flag++;
        }
        if (flag == 2)
        {
            printf("%d eh primo\n", X);
        }
        else
        {
            printf("%d nao eh primo\n", X);
        }
    }
    return 0;
}