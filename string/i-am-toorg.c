#include <stdio.h>

int main()
{
    int T, i = 0;
    char str[1002];
    scanf("%d", &T);
    for (i = 0; i <= T; i++)
    {
        fgets(str, sizeof(str), stdin);
        if (i != 0)
            printf("I am Toorg!\n");
    }

    return 0;
}