#include "../functions/ft_putchar.c"

void ft_print_numbers(void)
{
    for (int i = 0; i <= 9; i++)
    {
        ft_putchar(i + '0');
    }
}