#include <stdio.h>

int main()
{
    int NumberOfLines, starOfFirstLoop = 1;
    scanf("%d", &NumberOfLines);

    for (int i = 1; i <= NumberOfLines; i++)
    {
        for (int k = 1; k <= NumberOfLines - i; k++)
        {
            /* code */
            printf(" ");
        }

        for (int j = 1; j <= starOfFirstLoop; j++)
        {
            /* code */
            printf("*");
        }
        printf("\n");
        starOfFirstLoop = starOfFirstLoop + 2;
    }

    int starOfSecondLoop = starOfFirstLoop - 2;

    for (int i = NumberOfLines; i >= 1; i--)
    {
        for (int k = 1; k <= NumberOfLines - i; k++)
        {
            /* code */
            printf(" ");
        }

        for (int j = 1; j <= starOfSecondLoop; j++)
        {
            /* code */
            printf("*");
        }
        printf("\n");
        starOfSecondLoop = starOfSecondLoop - 2;
    }

    return 0;
}