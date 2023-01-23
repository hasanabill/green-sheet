#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int shift;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Enter the shift value: ");
    scanf("%d", &shift);

    int i, n = strlen(str);
    for (i = 0; i < n; i++)
    {
        str[i] = (str[i] - 'a' + shift) % 26 + 'a';
    }
    printf("Shifted string: %s\n", str);

    return 0;
}