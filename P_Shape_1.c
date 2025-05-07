#include <stdio.h>

int main()
{
    int lineNumber, i, j;
    scanf("%d", &lineNumber);

    for (i = lineNumber; i >= 1; i--)
    {
        /* code */
        for (j = 1; j <= i; j++)
        {
            /* code */
            printf("*");
        }
        if (i > 1)
        {
            /* code */
            printf("\n");
        }
        }

    return 0;
}