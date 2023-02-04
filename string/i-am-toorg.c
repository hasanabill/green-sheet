#include <stdio.h>

int main()
{
    int T, i = 0;
    char str[1002];
    scanf("%d", &T);
    // for (i = 0; i < T; i++)
    // {
    //     fgets(str, sizeof(str), stdin);
    //     printf("I am Toorg!\n");
    // }
    while (i < T)
    {
        gets(str);
        printf("I am Toorg!\n");
        i++;
    }

    return 0;
}