#include <stdio.h>

int ft_strlen(char *str)
{
    int length;
    for (int i = 0; str[i] != '\0'; i++)
    {
        length++;
    }
    return length;
}

int main()
{
    printf("length %d ", ft_strlen("I'm helloing"));
    return 0;
}