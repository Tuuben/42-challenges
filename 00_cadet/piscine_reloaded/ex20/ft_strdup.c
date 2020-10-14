#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *ft_strdup(char *src)
{
    size_t size = 0;
    for (int i = 0; src[i] != '\0'; i++)
        size++;

    char *pointer = malloc(size);

    if (pointer == (void *)0)
    {
        return (void *)0;
    }

    pointer = src;

    return pointer;
}

int main()
{
    char *copy_str = strdup("Hello world");

    printf("System string res %s", copy_str);

    char *ft_copy_str = ft_strdup("Hello world");

    printf("\n\nFT string res %s", ft_copy_str);

    return 0;
}