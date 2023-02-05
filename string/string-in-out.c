#include <stdio.h>

int main()
{
    char A[100], B[100], C[100];
    gets(A);
    gets(B);
    gets(C);

    printf("%s%s%s\n", A, B, C);
    printf("%s%s%s\n", B, C, A);
    printf("%s%s%s\n", C, A, B);
    int i;

    for (i = 0; A[i] != '\0' && i < 10; i++)
        printf("%c", A[i]);

    for (i = 0; B[i] != '\0' && i < 10; i++)
        printf("%c", B[i]);

    for (i = 0; C[i] != '\0' && i < 10; i++)
        printf("%c", C[i]);

    printf("\n");

    return 0;
}