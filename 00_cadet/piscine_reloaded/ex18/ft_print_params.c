#include "../functions/ft_putchar.c"

int main(int argc, char *argv[])
{
    for (int i = 1; argv[i] != 0; i++)
    {
        for (int y = 0; argv[i][y] != '\0'; y++)
        {
            ft_putchar(argv[i][y]);
        }
        ft_putchar('\n');
    }
    return 0;
}