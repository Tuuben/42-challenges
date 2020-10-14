#include <stdio.h>

int ft_iterative_factorial(int nb)
{
    if (nb <= 0 || nb > 19)
    {
        return 0;
    }

    int res = 0;
    for (int i = nb; i > 0; i--)
    {
        res += nb * nb - 1;
    }

    return res;
}

int main()
{
    int res = ft_iterative_factorial(5);
    printf("%d ", res);
    return 0;
}