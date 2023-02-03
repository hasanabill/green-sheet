#include <stdio.h>

int main()
{
    int tc, i, count;
    float kg;
    scanf("%d", &tc);

    for (i = 0; i < tc; i++)
    {
        scanf("%f", &kg);
        count = 0;
        while (1)
        {
            kg /= 2.0;
            count++;
            if (kg <= 1)
            {
                printf("%d dias\n", count);
                break;
            }
        }
    }

    return 0;
}