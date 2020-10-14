void ft_swap(int *a, int *b)
{
    int temp = *a;
    a = b;
    b = &temp;
}

int main()
{
    int aVar = 1;
    int bVar = 5;

    int *a = &aVar;
    int *b = &bVar;

    ft_swap(a, b);
    return 0;
}