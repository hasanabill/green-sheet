#include <stdio.h>
int main()
{
    int C1, B1, P1;
    int C2, B2, P2;
    scanf("%d%d%d", &C1, &B1, &P1);
    scanf("%d%d%d", &C2, &B2, &P2);
    int miss = 0;
    if (C2 > C1)
        miss += (C2 - C1);
    if (B2 > B1)
        miss += (B2 - B1);
    if (P2 > P1)
        miss += (P2 - P1);
    printf("%d\n", miss);
    return 0;
}