#include <stdio.h>
#include <string.h>
int main()
{
    char L[600];
    fgets(L, sizeof(L), stdin);
    if (strlen(L) <= 80)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}