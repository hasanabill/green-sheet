#include <stdio.h>

int main()
{
    int A, B, C;
    char str;
    while (scanf("%d%d%d", &A, &B, &C) != EOF)
    {
        if (A == B && A == C && B == C)
            str = '*';
        else if (A != B && B == C)
            str = 'A';
        else if (A == C && B != A)
            str = 'B';
        else if (A == B && C != A)
            str = 'C';

        printf("%c\n", str);
    }

    return 0;
}