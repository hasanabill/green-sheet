#include <stdio.h>

int main()
{
    char A[20], B[20], C[20];

    scanf("%s", A);
    scanf("%s", B);
    scanf("%s", C);

    if (A[0] == 'v' && B[0] == 'a' && C[0] == 'c')
        printf("aguia\n");
    if (A[0] == 'v' && B[0] == 'a' && C[0] == 'o')
        printf("pomba\n");
    if (A[0] == 'v' && B[0] == 'm' && C[0] == 'o')
        printf("homem\n");
    if (A[0] == 'v' && B[0] == 'm' && C[0] == 'h')
        printf("vaca\n");
    if (A[0] == 'i' && B[0] == 'i' && C[2] == 'm')
        printf("pulga\n");
    if (A[0] == 'i' && B[0] == 'i' && C[2] == 'r')
        printf("lagarta\n");
    if (A[0] == 'i' && B[0] == 'a' && C[0] == 'h')
        printf("sanguessuga\n");
    if (A[0] == 'i' && B[0] == 'a' && C[0] == 'o')
        printf("minhoca\n");

    return 0;
}