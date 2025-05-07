#include <stdio.h>

int main()
{
    int arraySize;
    scanf("%d", &arraySize);
    int integerArray[arraySize];

    for (int i = 0; i < arraySize; i++)
    {
        /* code */
        scanf("%d", &integerArray[i]);
    }

    for (int i = 0; i < arraySize; i++)
    {
        /* code */
        for (int j = i + 1; j < arraySize; j++)
        {
            /* code */
            int tmp;
            if (integerArray[i] > integerArray[j])
            {
                /* code */
                tmp = integerArray[j];
                integerArray[j] = integerArray[i];
                integerArray[i] = tmp;
            }
        }
    }

    for (int i = 0; i < arraySize; i++)
    {
        /* code */
        printf("%d ", integerArray[i]);
    }

    return 0;
}