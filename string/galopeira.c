#include <stdio.h>
#include <string.h>

int main()
{
    int C, T;
    char name[10100];
    scanf("%d", &C);
    for (int i = 0; i < C; i++)
    {
        scanf("%s", name);
        T = strlen(name);
        printf("%.2lf\n", T * .01);
    }
    return 0;
}