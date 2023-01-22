#include <stdio.h>

int main()
{
    float a, b, c, d, e;
    double avg, avg2;
    scanf("%f %f %f %f", &a, &b, &c, &d);
    avg = ((a * 2) + (b * 3) + (c * 4) + d) / 10;
    printf("Media: %.1lf\n", avg);
    if (avg < 5.0)
    {
        printf("Aluno reprovado.\n");
    }
    else if (avg >= 7.0)
    {
        printf("Aluno aprovado.\n");
    }
    else
    {
        printf("Aluno em exame.\n");
        scanf("%f", &e);
        printf("Nota do exame: %.1f\n", e);
        avg2 = (avg + e) / 2;
        if (avg2 >= 5.0)
        {
            printf("Aluno aprovado.\n");
        }
        else
        {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1lf\n", avg2);
    }

    return 0;
}