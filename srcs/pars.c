#include "../includes/pile.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	check_doublon(list_t *st)
{
	int stocknbr;
	list_t  *list;
	list_t  *element;
	list_t  *compare;

	list = st;
	element = st;
	while (list)
	{
		stocknbr = list->nbr;
		compare = element->next;
		while (compare)
		{
			if (stocknbr == compare->nbr)
            {
				error(st);
                return 0;
            }
			compare = compare->next;
		}
		list = list->next;
		element = element->next; 
	}
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
        if (ft_atoi(av) > INT_MAX || ft_atoi(av) < INT_MIN)
            return 1;
        if (ft_isdigit(av[i]) == 0)
            return 1;
            i++;
    }
  return 0;
}

int    check_order(list_t *st)
{
    while (st->next)
    {
        if (st->nbr < st->next->nbr && st->next != NULL)
            st = st->next;
        else
            return (1);
    }
    return (0);
}

void error(list_t *st)
{
    write(2,"Error\n",6);
    freestack(st);
    exit (EXIT_FAILURE);
}