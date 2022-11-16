#include "../includes/pile.h"

int main(int ac, char **av)
{
    list_t *list = NULL;
    int i = 0;
    //printf("\nadresse de push->%p--1apper\n", push_stack(list, av[i]));
    //printf("\nadresse de push->%p--2appel\n", push_stack(list, av[i]));

    //list = newstack();
    // if (isempty(list))
    //     printf("list vide\n");
    // else
    //     printf("liste rempli\n");
    // printf("\nadresse de push->%p--3appel\n", push_stack(list, av[i]));
    // printf("\nadresse de push->%p--\n", push_stack(list, av[i])); 
	ac = ac - 1;
    while (i < ac)
    {
        if(parsing(av[i + 1]) == 1)
            error(list);
        list = push_stack(list,av[i + 1]);
        i++;
    }
    //parsing(i);
    //swap(list);
    list = rotate(list);  

    // printf("%p", printstack(list));
    // printf("%p", printstack(list));
    // printf("%p", printstack(list));
    // printf("%p", printstack(list));
   
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