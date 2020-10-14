#include <stdio.h>

int ft_recursive_factorial(int nb)
{
    if (nb <= 0 || nb > 19)
    {
        return 0;
    }

    if (nb == 1)
    {
        return 1;
    }

    return nb * ft_recursive_factorial(nb - 1);
}

int main()
{
    int res = ft_recursive_factorial(19);
    printf("%d ", res);
    return 0;
}