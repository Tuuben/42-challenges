#include "../functions/ft_putchar.c"

void ft_is_negative(int n)
{
    ft_putchar(n < 0 ? 'N' : 'P');
}

int main()
{
    ft_is_negative(-1);
    ft_is_negative(5);
    ft_is_negative(-55);
    return 0;
}