#include "pile.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int parsing(char *av)
{
    int i;

    i = 0;
    while (av[i])
    {
        if(av[i] == '-' || (av[i] == '+' && av[i + 1]))
            i++;
        if (ft_isdigit(av[i]) == 0)
            return 1;
        i++;
    }
  return 0;
}

void error(list_t *stack)
{
    write(2,"Error\n",6);
    freestack(stack);
    exit (EXIT_FAILURE);
}