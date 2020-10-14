void ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b;
}

int main()
{
    int divVar = 0;
    int modVar = 0;

    int *div = &divVar;
    int *mod = &modVar;

    ft_div_mod(7, 2, div, mod);
    return 0;
}