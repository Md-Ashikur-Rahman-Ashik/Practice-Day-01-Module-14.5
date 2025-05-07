#include <stdio.h>

int main()
{
    int lineNumber, i, j, k;

    scanf("%d", &lineNumber);

    for (i = 1; i <= (lineNumber + (lineNumber - 1)); i += 2)
    {
        for (k = 1; k <= lineNumber - i; k++)
        {
            /* code */
            printf(" ");
        }

        for (j = 1; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}