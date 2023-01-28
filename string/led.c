#include <stdio.h>
#include <string.h>
int main()
{
    int i, N, j, leds;
    char num[102];
    scanf("%d", &N);
    for (i = 0; i < N; i++)
    {
        leds = 0;
        scanf("%s", &num);

        for (j = 0; j < strlen(num); j++)
        {
            if (num[j] == '1')
                leds += 2;
            else if (num[j] == '2' || num[j] == '3' || num[j] == '5')
                leds += 5;
            else if (num[j] == '0' || num[j] == '9' || num[j] == '6')
                leds += 6;
            else if (num[j] == '4')
                leds += 4;
            else if (num[j] == '7')
                leds += 3;
            else if (num[j] == '8')
                leds += 7;
        }
        printf("%d leds\n", leds);
    }
    return 0;
}