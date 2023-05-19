#include <stdio.h>

int main()
{
    int i = 0, num;

    scanf("%d", &num);

    while (i <= num)
    {
        i++;
        if (num % i == 0)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}