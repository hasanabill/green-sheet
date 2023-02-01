#include <stdio.h>

int main()
{
    long long int A, B, temp;

    while (scanf("%lld%lld", &A, &B) != EOF)
    {
        if (A > B)
        {
            temp = A;
            A = B;
            B = temp;
        }

        printf("%lld\n", B - A);
    }

    return 0;
}