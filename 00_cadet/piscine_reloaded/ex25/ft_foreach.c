#include <stdio.h>

void ft_putnbr(int num)
{
    printf("%d ,", num);
}

void ft_foreach(int *tab, int length, void (*f)(int))
{
    for (int i = 0; i < length; i++)
    {
        f(tab[i]);
    }
}

int main()
{
    int tabVar[] = {1, 2, 3, 4, 5};
    int *tab = tabVar;
    ft_foreach(tab, 5, &ft_putnbr);
    return 0;
}