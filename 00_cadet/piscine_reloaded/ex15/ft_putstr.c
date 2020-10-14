#include "../functions/ft_putchar.c"

void ft_putstr(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        ft_putchar(str[i]);
    }
}

int main()
{
    ft_putstr("hello world");
    return 0;
}