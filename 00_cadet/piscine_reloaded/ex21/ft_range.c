#include <stdlib.h>
#include <stdio.h>

int *ft_range(int min, int max)
{
    if (min >= max)
    {
        return (void *)0;
    }

    size_t intByteSize = 4;
    int diff = max - min;

    int *arr = malloc(diff * intByteSize);

    for (int i = 0; i <= diff; i++)
        arr[i] = min + i;

    return arr;
}

int main()
{
    int *arr = ft_range(2, 18);
    for (int i = 0; arr[i] != '\0'; i++)
        printf(" %d", arr[i]);
    return 0;
}