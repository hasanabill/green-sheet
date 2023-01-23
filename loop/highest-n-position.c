#include <stdio.h>

int main()
{
    int i, arr[100];

    for (i = 0; i < 100; i++)
    {
        scanf("%d", &arr[i]);
    }
    int highest = arr[0];
    int pos = 0;

    for (i = 0; i < 100; i++)
    {
        if (arr[i] > highest)
        {
            highest = arr[i];
            pos = i;
        }
    }
    printf("%d\n", highest);
    printf("%d\n", pos + 1);

    return 0;
}