#include <stdio.h>
#include <math.h>

int isPrime(int x)
{
    int i, flag = 1;
    if (x == 0 || x == 1)
    {
        flag = 0;
    }
    for (i = 2; i <= sqrt(x); i++)
    {
        if (x % i == 0)
        {
            flag = 0;
            break;
        }
    }
    return flag;
}

int main()
{
    int n;
    while ((scanf("%d", &n)) != EOF)
    {
        if (isPrime(n) == 0)
        {
            printf("Nada\n");
        }
        else
        {
            int j = 0, cnt = 0, n1;
            while (n != 0)
            {
                n1 = n % 10;
                j++;
                if (isPrime(n1) == 1)
                {
                    cnt++;
                }
                n /= 10;
            }
            if (j == cnt)
            {
                printf("Super\n");
            }
            else
            {
                printf("Primo\n");
            }
        }
    }
    return 0;
}