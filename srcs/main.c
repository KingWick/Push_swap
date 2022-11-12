#include "../includes/pile.h"

int main(int ac, char **av)
{
    list_t *list = NULL;
    free(list);
    if (ac < 2)
        return 0;
    //list = newstack();
    // if (isempty(list))
    //     printf("list vide\n");
    // else
    //     printf("liste rempli\n");
	int i = 1;
	while (av[i])
	{
		list = push_stack(list, av[i]);
		i++;
	}
    //swap(list);
    list = rotate(list);
    //list = push_stack(list,14);
    //list = push_stack(list,47);
	//list = push_stack(list,11);
	//list = push_stack(list,65);
    printstack(list);

    //  if (isempty(list))
    //     printf("list vide\n");
    // else
    //     printf("liste rempli\n");
    
    list = freestack(list);
    //  if (isempty(list))
    //     printf("list vide\n");
    // else
    //     printf("liste rempli\n");
}