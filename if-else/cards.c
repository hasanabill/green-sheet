#include <stdio.h>

int main()
{
    int arr[5];
    int i;
    int card1 = 0, card2 = 0, card3 = 0;

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 1; i < 4; i++)
    {
        if (arr[i] < arr[i + 1] && arr[i - 1] < arr[i])
            card1++;

        else if (arr[i] > arr[i + 1] && arr[i - 1] > arr[i])
            card2++;
        else
        {
            card3 = 3;
            break;
        }
    }

    if (card1 == 3)
        printf("C\n");

    else if (card2 == 3)
        printf("D\n");

    else if (card3 == 3)
        printf("N\n");

    return 0;
}