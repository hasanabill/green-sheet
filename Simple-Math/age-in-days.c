#include <stdio.h>

int main()
{
    int days;
    scanf("%d", &days);
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", days / 365, days % 365 / 30, days % 365 % 30);

    return 0;
}