#include <stdio.h>

int main()
{
    int NumberOfLines, i, j, k, star = 1;

    scanf("%d", &NumberOfLines);

    for (i = 1; i <= NumberOfLines; i++)
    {
        for (k = 1; k <= NumberOfLines - i; k++)
        {
            /* code */
            printf(" ");
        }

        for (j = 1; j <= star; j++)
        {
            /* code */
            printf("*");
        }
        printf("\n");
        star = star + 2;
    }

    return 0;
}