#include <stdio.h>

int ft_count_if(char **tab, int (*f)(char *))
{
    int count = 0;
    for (int i = 0; tab[i] != '\0'; i++)
    {
        if (f(tab[i]))
        {
            count++;
        }
    }
    return count;
}