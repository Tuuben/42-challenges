#include <stdio.h>

int ft_sqrt(int nb)
{
    float tmp, sqrt = 0.0;
    sqrt = nb / 2;
    while (sqrt != tmp)
    {
        tmp = sqrt;
        sqrt = (nb / tmp + tmp) / 2;
    }

    return ((int)sqrt == sqrt ? sqrt : 0);
}

int main()
{
    printf("Result: %d", ft_sqrt(25));
}