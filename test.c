#include <stdio.h>

int main()
{
    int x, y;
    float z;
    scanf("%d%d%f", &x, &y, &z);
    printf("NUMBER = %d\n", x);
    printf("SALARY = U$ %.2f\n", y * z);
    return 0;
}