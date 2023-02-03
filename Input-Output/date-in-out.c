#include <stdio.h>

int main()
{
    int d, m, y;
    char str1, str2;

    scanf("%d %c %d %c %d", &d, &str1, &m, &str2, &y);

    printf("%02d/%02d/%02d\n", m, d, y);
    printf("%02d/%02d/%02d\n", y, m, d);
    printf("%02d-%02d-%02d\n", d, m, y);

    return 0;
}