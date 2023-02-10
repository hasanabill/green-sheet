#include <stdio.h>
#include <string.h>

int main()
{
    int N, i;
    char str[6];
    scanf("%d", &N);
    for (i = 0; i < N; i++)
    {
        scanf("%s", &str);
        if (strlen(str) == 5)
            printf("%d\n", 3);
        else if ((str[0] == 't' && str[1] == 'w') || (str[0] == 't' && str[2] == 'o') || (str[1] == 'w' && str[2] == 'o'))
            printf("%d\n", 2);
        else
            printf("%d\n", 1);
    }

    return 0;
}