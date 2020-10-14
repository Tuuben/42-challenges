#include "../functions/ft_putchar.c"

int main(int argc, char *argv[])
{
    int noChange = 0;
    // Repeat until there is nothing more to sort
    while (!noChange)
    {
        noChange = 1;
        // Loop all words in current sorted array
        for (int i = 1; argv[i] != 0; i++)
        {
            // Break if index is at the last element in the array
            if (argv[i + 1] == 0)
            {
                break;
            }

            // Loop until finding a character that is not the same
            int charIndex = 0;
            while (argv[i][charIndex] == argv[i + 1][charIndex])
                charIndex++;

            if (argv[i][charIndex] > argv[i + 1][charIndex])
            {
                char *temp = argv[i];
                argv[i] = argv[i + 1];
                argv[i + 1] = temp;
                noChange = 0;
            }
        }
    }

    // print args
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