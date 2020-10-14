#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2)
{
    int s1Weight = 0;
    int s2Weight = 0;
    for (int i = 0; s1[i] != '\0'; i++)
    {
        s1Weight += s1[i];
    }
    for (int i = 0; s2[i] != '\0'; i++)
    {
        s2Weight += s2[i];
    }

    if (s1Weight == s2Weight)
    {
        return 0;
    }

    return s1Weight < s2Weight ? -1 : 1;
}

int main()
{
    printf("mystrcmp %d \n\n", ft_strcmp("hello", "helro"));
    printf("system strcmp %d", strcmp("hello", "helro"));
    return 0;
}