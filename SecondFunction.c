#include <stdio.h>

char small_to_capital(char character)
{
    int result = character - 32;
    return result;
}

int main()
{
    char character;
    scanf("%c", &character);

    char result = small_to_capital(character);
    printf("%c", result);

    return 0;
}