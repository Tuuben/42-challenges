void ft_ft(int *nbr)
{
    *nbr = 42;
}

int main()
{
    int var;
    int *nbr = &var;
    ft_ft(nbr);
    return 0;
}