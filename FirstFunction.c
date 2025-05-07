#include <stdio.h>

int char_to_ascii(int character)
{
    return character;
}

int main()
{
    char character;
    scanf("%c", &character);

    int result = char_to_ascii(character);
    printf("%d", result);
    return 0;
}