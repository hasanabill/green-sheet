#include <stdio.h>
#include <string.h>
int main()
{
    int C, i;
    scanf("%d", &C);
    char name[100];
    int force;

    for (i = 0; i < C; i++)
    {
        scanf("%s %d", &name, &force);
        if (!strcmp(name, "Thor"))
            printf("Y\n");
        else
            printf("N\n");
    }

    return 0;
}