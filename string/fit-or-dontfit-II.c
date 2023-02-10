#include <stdio.h>
#include <string.h>

int main()
{
    int N, i, j, k, flag;
    char num1[1001], num2[1001];
    scanf("%d", &N);

    for (i = 0; i < N; i++)
    {
        scanf("%s %s", &num1, &num2);
        flag = 0;
        for (j = strlen(num2), k = strlen(num1); j >= 0; j--, k--)
        {
            if (num1[k] == num2[j])
                flag++;
            else
                break;
        }
        if (flag == strlen(num2) + 1)
            printf("encaixa\n");
        else
            printf("nao encaixa\n");
    }

    return 0;
}